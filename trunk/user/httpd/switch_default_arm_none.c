/*
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston,
 * MA 02111-1307 USA
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>
#include <errno.h>
#include <fcntl.h>
#include <string.h>
#include <sys/ioctl.h>

#include "httpd.h"

//#include <rtl8367_ioctl.h>

#define RTL8367_IOCTL_STATUS_MIB_PORT 0
#define RTL8367_IOCTL_STATUS_BYTES_PORT 0
#define RTL8367_IOCTL_STATUS_SPEED_PORT 0
#define RTL8367_DEVPATH "/dev/null"


////////////////////////////////////////////////////////////////////////////////
// MIB COUNTERS
////////////////////////////////////////////////////////////////////////////////

typedef struct mib_counters_s
{
    uint64_t ifInOctets;
    uint32_t dot3StatsFCSErrors;
    uint32_t dot3StatsSymbolErrors;
    uint32_t dot3InPauseFrames;
    uint32_t dot3ControlInUnknownOpcodes;
    uint32_t etherStatsFragments;
    uint32_t etherStatsJabbers;
    uint32_t ifInUcastPkts;
    uint32_t etherStatsDropEvents;
    uint64_t etherStatsOctets;
    uint32_t etherStatsUndersizePkts;
    uint32_t etherStatsOversizePkts;
    uint32_t etherStatsPkts64Octets;
    uint32_t etherStatsPkts65to127Octets;
    uint32_t etherStatsPkts128to255Octets;
    uint32_t etherStatsPkts256to511Octets;
    uint32_t etherStatsPkts512to1023Octets;
    uint32_t etherStatsPkts1024toMaxOctets;
    uint32_t etherStatsMcastPkts;
    uint32_t etherStatsBcastPkts;
    uint64_t ifOutOctets;
    uint32_t dot3StatsSingleCollisionFrames;
    uint32_t dot3StatsMultipleCollisionFrames;
    uint32_t dot3StatsDeferredTransmissions;
    uint32_t dot3StatsLateCollisions;
    uint32_t etherStatsCollisions;
    uint32_t dot3StatsExcessiveCollisions;
    uint32_t dot3OutPauseFrames;
    uint32_t dot1dBasePortDelayExceededDiscards;
    uint32_t dot1dTpPortInDiscards;
    uint32_t ifOutUcastPkts;
    uint32_t ifOutMulticastPkts;
    uint32_t ifOutBrocastPkts;
    uint32_t outOampduPkts;
    uint32_t inOampduPkts;
    uint32_t pktgenPkts;
} mib_counters_t;

////////////////////////////////////////////////////////////////////////////////
// IOCTL
////////////////////////////////////////////////////////////////////////////////

static int rtl8367_ioctl(unsigned int cmd, unsigned int par, unsigned int *value)
{
	int fd, retVal = 0;

	fd = open(RTL8367_DEVPATH, O_RDONLY);
	if (fd < 0) {
		perror(RTL8367_DEVPATH);
		return errno;
	}

	//cmd &= ((1L << RTL8367_IOCTL_CMD_LENGTH_BITS) - 1);
	//cmd |= (par << RTL8367_IOCTL_CMD_LENGTH_BITS);

	if(ioctl(fd, cmd, value) < 0)
	{
		perror("ioctl");
		retVal = errno;
	}
	
	close(fd);

	return retVal;
}

int get_eth_port_bytes(int port_id_uapi, uint64_t *rx, uint64_t *tx)
{
	//port_bytes_t pb;
	unsigned int pb[60];
	int ioctl_result;

	ioctl_result = rtl8367_ioctl(RTL8367_IOCTL_STATUS_BYTES_PORT, port_id_uapi, (unsigned int *)&pb);
	if (ioctl_result < 0)
		return ioctl_result;

	//*rx = pb.RX;
	//*tx = pb.TX;
	*rx= 10451;
	*tx= 10456;

	return ioctl_result;
}

int fill_eth_port_status(int port_id_uapi, char linkstate[40])
{
	unsigned int link_value = 0;
	int has_link = 0;

	char path_buf[100]={0};
	char lspeed_buf[100]={0};

	//IFNAME_WAN should be return 0 from nvram_get_int("wan_src_phy");
	char *p_ifname_list[] = {IFNAME_WAN, IFNAME_LAN1, IFNAME_LAN2, IFNAME_LAN3, IFNAME_LAN4};
	char *p_ifname = 0;
	if(port_id_uapi >= 0 && port_id_uapi <= 4){
		p_ifname = p_ifname_list[port_id_uapi];
	}else{
		strcpy(linkstate, "No Link");
		return 0;

	}

	sprintf(path_buf,"/sys/class/net/%s/speed",p_ifname);

	FILE* fp = fopen(path_buf, "r");
        if (fp) {
                if (fgets(lspeed_buf, sizeof(lspeed_buf), fp))
                {
			strtok(lspeed_buf, "\n");
                }
                fclose(fp);
        }else{
		strcpy(linkstate, "No Link");
		return 0;
	}


        char duplex_buf[100] = {0};
	sprintf(path_buf,"/sys/class/net/%s/duplex",p_ifname);
	fp = fopen(path_buf, "r");
        if (fp )
        {
		fgets(duplex_buf, sizeof(duplex_buf), fp);
		strtok(duplex_buf, "\n");

                fclose(fp);
	}
		
	/* 1000 Mbps, Full Duplex, FC TX/RX */
	sprintf(linkstate, "%s Mbps, %s", lspeed_buf, duplex_buf);
	return 1;
}

int fill_eth_status(int port_id_uapi, webs_t wp)
{
	int ret = 0;
	char etherlink[40] = {0};
	mib_counters_t mibc;

	fill_eth_port_status(port_id_uapi, etherlink);

	ret += websWrite(wp, "Port Link			: %s\n", etherlink);

	memset(&mibc, 0, sizeof(mib_counters_t));
	if (rtl8367_ioctl(RTL8367_IOCTL_STATUS_MIB_PORT, port_id_uapi, (unsigned int *)&mibc) == 0) {
		ret += websWrite(wp, "\nMIB Counters\n");
		ret += websWrite(wp, "----------------------------------------\n");
		ret += websWrite(wp, "ifInOctets			: %lu\n", mibc.ifInOctets);
		ret += websWrite(wp, "ifOutOctets			: %lu\n", mibc.ifOutOctets);
		ret += websWrite(wp, "etherStatsMcastPkts		: %u\n", mibc.etherStatsMcastPkts);
		ret += websWrite(wp, "etherStatsBcastPkts		: %u\n", mibc.etherStatsBcastPkts);
		ret += websWrite(wp, "etherStatsFragments		: %u\n", mibc.etherStatsFragments);
		ret += websWrite(wp, "etherStatsDropEvents		: %u\n", mibc.etherStatsDropEvents);
		ret += websWrite(wp, "etherStatsUndersizePkts		: %u\n", mibc.etherStatsUndersizePkts);
		ret += websWrite(wp, "etherStatsOversizePkts		: %u\n", mibc.etherStatsOversizePkts);
		ret += websWrite(wp, "etherStatsCollisions		: %u\n", mibc.etherStatsCollisions);
		ret += websWrite(wp, "dot3StatsFCSErrors		: %u\n", mibc.dot3StatsFCSErrors);
		ret += websWrite(wp, "dot3StatsSymbolErrors		: %u\n", mibc.dot3StatsSymbolErrors);
		ret += websWrite(wp, "dot3ControlInUnknownOpcodes	: %u\n", mibc.dot3ControlInUnknownOpcodes);
		ret += websWrite(wp, "dot3InPauseFrames		: %u\n", mibc.dot3InPauseFrames);
		ret += websWrite(wp, "dot3OutPauseFrames		: %u", mibc.dot3OutPauseFrames);
	}

	return ret;
}

