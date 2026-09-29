/*
 * nl80211 wireless scan support for ARM/mt76 platforms.
 *
 * The legacy Ralink SiteSurvey ioctl is kept disabled in ralink.c because
 * mt76 exposes scan results through cfg80211/nl80211 instead.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <sys/types.h>
#include <net/if.h>

#include "common.h"
#include "httpd.h"

#define SCAN_CMD "/usr/sbin/iw"
#define SCAN_LINE_LEN 256

struct scan_entry {
	char bssid[24];
	char ssid[128];
	char channel[8];
	char signal[8];
	int have_freq;
	int have_signal;
};

static void
scan_entry_reset(struct scan_entry *entry)
{
	memset(entry, 0, sizeof(*entry));
}

static int
hex_value(char c)
{
	if (c >= '0' && c <= '9')
		return c - '0';
	if (c >= 'a' && c <= 'f')
		return c - 'a' + 10;
	if (c >= 'A' && c <= 'F')
		return c - 'A' + 10;
	return -1;
}

static void
parse_ssid(char *dst, size_t dst_len, const char *src)
{
	size_t pos = 0;

	while (*src && *src != '\n' && *src != '\r' && pos + 1 < dst_len) {
		if (src[0] == '\\' && src[1] == 'x' &&
		    hex_value(src[2]) >= 0 && hex_value(src[3]) >= 0) {
			dst[pos++] = (char)((hex_value(src[2]) << 4) | hex_value(src[3]));
			src += 4;
		} else {
			dst[pos++] = *src++;
		}
	}
	dst[pos] = '\0';
}

static int
channel_from_frequency(int frequency)
{
	if (frequency == 2484)
		return 14;
	if (frequency >= 2412 && frequency <= 2472)
		return (frequency - 2407) / 5;
	if (frequency >= 5000 && frequency <= 5900)
		return (frequency - 5000) / 5;
	if (frequency >= 5955 && frequency <= 7115)
		return (frequency - 5950) / 5;
	return 0;
}

static int
get_phy_index(const char *ifname, int *phy)
{
	char command[128];
	char line[SCAN_LINE_LEN];
	FILE *fp;
	int value;

	snprintf(command, sizeof(command), "%s dev %s info 2>/dev/null",
		 SCAN_CMD, ifname);
	fp = popen(command, "r");
	if (!fp)
		return -1;

	while (fgets(line, sizeof(line), fp)) {
		if (sscanf(line, "\twiphy %d", &value) == 1) {
			*phy = value;
			pclose(fp);
			return 0;
		}
	}
	pclose(fp);
	return -1;
}

static int
get_sta_mac(const char *ap_ifname, char *mac, size_t mac_len)
{
	char path[64];
	FILE *fp;
	unsigned int octet[6];
	int i;

	snprintf(path, sizeof(path), "/sys/class/net/%s/address", ap_ifname);
	fp = fopen(path, "r");
	if (!fp)
		return -1;
	if (fscanf(fp, "%x:%x:%x:%x:%x:%x",
		   &octet[0], &octet[1], &octet[2], &octet[3],
		   &octet[4], &octet[5]) != 6) {
		fclose(fp);
		return -1;
	}
	fclose(fp);

	for (i = 0; i < 6; i++) {
		if (octet[i] > 0xff)
			return -1;
	}

	for (i = 5; i >= 0; i--) {
		octet[i]++;
		if (octet[i] <= 0xff)
			break;
		octet[i] = 0;
	}

	if (snprintf(mac, mac_len, "%02x:%02x:%02x:%02x:%02x:%02x",
		     octet[0], octet[1], octet[2], octet[3], octet[4], octet[5]) >=
		    (int)mac_len)
		return -1;
	return 0;
}

static void
ssid_to_uri(char *dst, size_t dst_len, const char *src)
{
	static const char hex[] = "0123456789ABCDEF";
	size_t pos = 0;
	const unsigned char *p = (const unsigned char *)src;

	while (*p && pos + 1 < dst_len) {
		if (isalnum(*p) || *p == '-' || *p == '_' || *p == '.' || *p == '~') {
			dst[pos++] = (char)*p;
		} else if (pos + 3 < dst_len) {
			dst[pos++] = '%';
			dst[pos++] = hex[*p >> 4];
			dst[pos++] = hex[*p & 0x0f];
		} else {
			break;
		}
		p++;
	}
	dst[pos] = '\0';
}

static void
emit_scan_entry(webs_t wp, const struct scan_entry *entry, int *count)
{
	char ssid[384];
	const char *name = entry->ssid[0] ? entry->ssid : "???";

	ssid_to_uri(ssid, sizeof(ssid), name);
	if (*count)
		websWrite(wp, ",");
	websWrite(wp, "[\"%s\", \"%s\", \"%s\", \"%s\"]",
		  ssid, entry->bssid, entry->channel,
		  entry->signal[0] ? entry->signal : "0");
	(*count)++;
}

static int
scan_interface(webs_t wp, const char *ifname)
{
	char command[128];
	char line[SCAN_LINE_LEN];
	FILE *fp;
	struct scan_entry entry;
	int count = 0;

	/* This driver returns scan results directly from iw scan. */
	snprintf(command, sizeof(command), "%s dev %s scan 2>/dev/null",
		 SCAN_CMD, ifname);
	fp = popen(command, "r");
	if (!fp)
		return 0;

	scan_entry_reset(&entry);
	while (fgets(line, sizeof(line), fp)) {
		if (!strncmp(line, "BSS ", 4)) {
			if (entry.bssid[0])
				emit_scan_entry(wp, &entry, &count);
			scan_entry_reset(&entry);
			sscanf(line + 4, "%23s", entry.bssid);
		} else if (!strncmp(line, "\tSSID: ", 7)) {
			parse_ssid(entry.ssid, sizeof(entry.ssid), line + 7);
		} else if (!strncmp(line, "\tfreq: ", 7)) {
			int frequency = atoi(line + 7);
			int channel = channel_from_frequency(frequency);
			if (channel > 0)
				snprintf(entry.channel, sizeof(entry.channel), "%d", channel);
			entry.have_freq = 1;
		} else if (!strncmp(line, "\tsignal: ", 9)) {
			double dbm = atof(line + 9);
			int signal = (int)((dbm + 100.0) * 2.0);
			if (signal < 0)
				signal = 0;
			if (signal > 100)
				signal = 100;
			snprintf(entry.signal, sizeof(entry.signal), "%d", signal);
			entry.have_signal = 1;
		}
	}

	if (entry.bssid[0])
		emit_scan_entry(wp, &entry, &count);
	pclose(fp);
	return count;
}

static int
scan_interface_arm(webs_t wp, const char *ap_ifname, const char *sta_ifname)
{
	char command[128];
	char mac[18];
	int phy;
	int temporary = 0;
	int count;

	if (if_nametoindex(sta_ifname) == 0) {
		if (if_nametoindex(ap_ifname) == 0 ||
		    get_phy_index(ap_ifname, &phy) < 0 ||
		    get_sta_mac(ap_ifname, mac, sizeof(mac)) < 0) {
			websWrite(wp, "[[\"\", \"\", \"\", \"\"]]");
			return 0;
		}

		snprintf(command, sizeof(command),
			 "%s phy phy%d interface add %s type managed addr %s",
			 SCAN_CMD, phy, sta_ifname, mac);
		if (system(command) != 0) {
			websWrite(wp, "[[\"\", \"\", \"\", \"\"]]");
			return 0;
		}

		snprintf(command, sizeof(command), "ip link set %s up", sta_ifname);
		if (system(command) != 0) {
			snprintf(command, sizeof(command), "%s dev %s del",
				 SCAN_CMD, sta_ifname);
			system(command);
			websWrite(wp, "[[\"\", \"\", \"\", \"\"]]");
			return 0;
		}
		temporary = 1;
	}

	websWrite(wp, "[");
	count = scan_interface(wp, sta_ifname);
	if (!count)
		websWrite(wp, "[\"\", \"\", \"\", \"\"]");
	websWrite(wp, "]");

	if (temporary) {
		snprintf(command, sizeof(command), "%s dev %s del",
			 SCAN_CMD, sta_ifname);
		system(command);
	}
	return 0;
}

#if BOARD_HAS_5G_RADIO
int
ej_wl_scan_5g(int eid, webs_t wp, int argc, char **argv)
{
	(void)argc;
	(void)argv;
	(void)eid;
	return scan_interface_arm(wp, IFNAME_5G_MAIN, IFNAME_5G_STA);
}
#endif

int
ej_wl_scan_2g(int eid, webs_t wp, int argc, char **argv)
{
	(void)argc;
	(void)argv;
	(void)eid;
	return scan_interface_arm(wp, IFNAME_2G_MAIN, IFNAME_2G_STA);
}
