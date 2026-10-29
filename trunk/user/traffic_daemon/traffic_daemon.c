#include <arpa/inet.h>
#include <errno.h>
#include <getopt.h>
#include <pcap.h>
#include <signal.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <time.h>
#include <unistd.h>

#define MAX_CLIENTS 256
#define DEFAULT_INTERFACE "br0"
#define DEFAULT_OUTPUT "/tmp/traffic.json"
#define DEFAULT_INTERVAL 1

struct client_stats {
	int family;
	unsigned char address[16];
	uint64_t rx_bytes;
	uint64_t tx_bytes;
	uint64_t rx_packets;
	uint64_t tx_packets;
	uint64_t last_rx_bytes;
	uint64_t last_tx_bytes;
};

static struct client_stats clients[MAX_CLIENTS];
static size_t client_count;
static int running = 1;
static int lan_family;
static unsigned char lan_address[16];
static int lan_prefix;
static unsigned int interval_seconds = DEFAULT_INTERVAL;
static const char *output_path = DEFAULT_OUTPUT;
static const char *pidfile_path;

static void stop_capture(int signal_number)
{
	(void) signal_number;
	running = 0;
}

static void remove_pidfile(void)
{
	if (pidfile_path)
		unlink(pidfile_path);
}

static int write_pidfile(void)
{
	FILE *file;

	if (!pidfile_path)
		return 0;
	file = fopen(pidfile_path, "w");
	if (!file)
		return -1;
	fprintf(file, "%ld\n", (long) getpid());
	fclose(file);
	return 0;
}

static int address_in_lan(int family, const unsigned char *address)
{
	int full_bytes = lan_prefix / 8;
	int remaining_bits = lan_prefix % 8;

	if (family != lan_family)
		return 0;
	if (lan_prefix == 0)
		return 1;
	if (memcmp(address, lan_address, (size_t) full_bytes) != 0)
		return 0;
	if (remaining_bits == 0)
		return 1;
	return (address[full_bytes] & (unsigned char) (0xff << (8 - remaining_bits))) ==
		(lan_address[full_bytes] & (unsigned char) (0xff << (8 - remaining_bits)));
}

static struct client_stats *find_client(int family, const unsigned char *address)
{
	size_t i;

	for (i = 0; i < client_count; i++) {
		if (clients[i].family == family &&
		    memcmp(clients[i].address, address, family == AF_INET ? 4 : 16) == 0)
			return &clients[i];
	}

	if (client_count == MAX_CLIENTS)
		return NULL;

	clients[client_count].family = family;
	memcpy(clients[client_count].address, address, family == AF_INET ? 4 : 16);
	return &clients[client_count++];
}

static void account_packet(int family, const unsigned char *source,
				   const unsigned char *destination, uint32_t length)
{
	struct client_stats *client;

	if (address_in_lan(family, source)) {
		client = find_client(family, source);
		if (client) {
			client->tx_bytes += length;
			client->tx_packets++;
		}
	}

	if (address_in_lan(family, destination)) {
		client = find_client(family, destination);
		if (client) {
			client->rx_bytes += length;
			client->rx_packets++;
		}
	}
}

static void packet_handler(unsigned char *user, const struct pcap_pkthdr *header,
				   const unsigned char *packet)
{
	int link_offset = 14;
	uint16_t ether_type;
	(void) user;

	if (header->caplen < (unsigned int) link_offset)
		return;

	memcpy(&ether_type, packet + 12, sizeof(ether_type));
	ether_type = ntohs(ether_type);
	while (ether_type == 0x8100 || ether_type == 0x88a8) {
		if (header->caplen < (unsigned int) link_offset + 4)
			return;
		memcpy(&ether_type, packet + link_offset + 2, sizeof(ether_type));
		ether_type = ntohs(ether_type);
		link_offset += 4;
	}

	if (ether_type == 0x0800) {
		const unsigned char *ip = packet + link_offset;
		unsigned int ip_header_length;
		if (header->caplen < (unsigned int) link_offset + 20 ||
		    (ip[0] >> 4) != 4)
			return;
		ip_header_length = (unsigned int) (ip[0] & 0x0f) * 4;
		if (ip_header_length < 20 ||
		    header->caplen < (unsigned int) link_offset + ip_header_length)
			return;
		account_packet(AF_INET, ip + 12, ip + 16, header->len);
	} else if (ether_type == 0x86dd) {
		const unsigned char *ip = packet + link_offset;
		if (header->caplen < (unsigned int) link_offset + 40 ||
		    (ip[0] >> 4) != 6)
			return;
		account_packet(AF_INET6, ip + 8, ip + 24, header->len);
	}
}

static void write_json(time_t now, time_t previous)
{
	char temporary_path[256];
	FILE *file;
	size_t i;
	double elapsed = difftime(now, previous);

	if (elapsed <= 0)
		elapsed = 1;
	if (snprintf(temporary_path, sizeof(temporary_path), "%s.tmp", output_path) >=
	    (int) sizeof(temporary_path))
		return;

	file = fopen(temporary_path, "w");
	if (!file)
		return;

	fprintf(file, "{\"timestamp\":%ld,\"clients\":[", (long) now);
	for (i = 0; i < client_count; i++) {
		char address[INET6_ADDRSTRLEN];
		uint64_t rx_delta = clients[i].rx_bytes - clients[i].last_rx_bytes;
		uint64_t tx_delta = clients[i].tx_bytes - clients[i].last_tx_bytes;
		const void *source = clients[i].address;

		if (!inet_ntop(clients[i].family, source, address, sizeof(address)))
			continue;
		if (i != 0)
			fputc(',', file);
		fprintf(file,
			"{\"ip\":\"%s\",\"rx_bytes\":%llu,\"tx_bytes\":%llu,"
			"\"rx_bps\":%llu,\"tx_bps\":%llu,\"rx_packets\":%llu,"
			"\"tx_packets\":%llu}", address,
			(unsigned long long) clients[i].rx_bytes,
			(unsigned long long) clients[i].tx_bytes,
			(unsigned long long) (rx_delta / elapsed),
			(unsigned long long) (tx_delta / elapsed),
			(unsigned long long) clients[i].rx_packets,
			(unsigned long long) clients[i].tx_packets);
		clients[i].last_rx_bytes = clients[i].rx_bytes;
		clients[i].last_tx_bytes = clients[i].tx_bytes;
	}
	fputs("]}\n", file);
	fclose(file);
	rename(temporary_path, output_path);
}

static int parse_lan(const char *value)
{
	char buffer[INET6_ADDRSTRLEN + 4];
	char *slash;

	if (strlen(value) >= sizeof(buffer))
		return -1;
	strcpy(buffer, value);
	slash = strchr(buffer, '/');
	if (!slash)
		return -1;
	*slash++ = '\0';
	lan_prefix = atoi(slash);
	if (inet_pton(AF_INET, buffer, lan_address) == 1) {
		lan_family = AF_INET;
		if (lan_prefix < 0 || lan_prefix > 32)
			return -1;
		return 0;
	}
	if (inet_pton(AF_INET6, buffer, lan_address) == 1) {
		lan_family = AF_INET6;
		if (lan_prefix < 0 || lan_prefix > 128)
			return -1;
		return 0;
	}
	return -1;
}

static void usage(const char *program)
{
	fprintf(stderr, "Usage: %s [-i interface] [-n lan/cidr] [-o json] [-t seconds]\n",
		program);
}

int main(int argc, char **argv)
{
	char error_buffer[PCAP_ERRBUF_SIZE];
	const char *interface = DEFAULT_INTERFACE;
	pcap_t *capture;
	int option;
	time_t previous, now;

	while ((option = getopt(argc, argv, "i:n:o:p:t:h")) != -1) {
		switch (option) {
		case 'i': interface = optarg; break;
		case 'n': if (parse_lan(optarg) < 0) { usage(argv[0]); return 1; } break;
		case 'o': output_path = optarg; break;
		case 'p': pidfile_path = optarg; break;
		case 't': interval_seconds = (unsigned int) atoi(optarg); break;
		case 'h': usage(argv[0]); return 0;
		default: usage(argv[0]); return 1;
		}
	}
	if (interval_seconds == 0)
		interval_seconds = DEFAULT_INTERVAL;
	if (!lan_family) {
		fprintf(stderr, "LAN CIDR is required, for example -n 192.168.1.0/24\n");
		return 1;
	}
	if (write_pidfile() < 0) {
		fprintf(stderr, "cannot write pidfile %s: %s\n", pidfile_path,
			strerror(errno));
		return 1;
	}

	signal(SIGINT, stop_capture);
	signal(SIGTERM, stop_capture);
	atexit(remove_pidfile);
	capture = pcap_open_live(interface, 65535, 1, 1000, error_buffer);
	if (!capture) {
		fprintf(stderr, "pcap_open_live(%s): %s\n", interface, error_buffer);
		return 1;
	}
	if (pcap_datalink(capture) != DLT_EN10MB) {
		fprintf(stderr, "Unsupported link type on %s\n", interface);
		pcap_close(capture);
		return 1;
	}

	previous = time(NULL);
	while (running) {
		pcap_dispatch(capture, -1, packet_handler, NULL);
		now = time(NULL);
		if (now - previous >= (time_t) interval_seconds) {
			write_json(now, previous);
			previous = now;
		}
	}

	pcap_close(capture);
	return 0;
}
