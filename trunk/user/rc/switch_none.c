#include <stdint.h>
#include <stdio.h>
#include "rc.h"
#include "netutils.h"

int phy_ports_lan_power(int power_on){return 0;}
int phy_clear_mac_table(void){ return 0;}

int phy_status_port_link(int port_id_uapi, unsigned int *p_link_on){
	
	char *p_ifname_list[] = {IFNAME_WAN, IFNAME_LAN1, IFNAME_LAN2, IFNAME_LAN3, IFNAME_LAN4};
        char *p_ifname = 0;
        if(port_id_uapi >= 0 && port_id_uapi <= 4){
                p_ifname = p_ifname_list[port_id_uapi];
        }else{
	    if(p_link_on ) *p_link_on=1;
                return -1;
        }

	char fname[128]={0};

	snprintf(fname, sizeof(fname), "/sys/class/net/%s/speed", p_ifname);
	int speed=0;
	if(0==fget_int(fname, &speed)){
		if(speed == -1)
		{
			if(p_link_on ) *p_link_on = 0;
		}
		else{
			if(speed>0){
				if(p_link_on ) *p_link_on = 1;
			}
		}
		
	}
	
	return 0;
}
int phy_status_port_bytes(int port_id_uapi, uint64_t *rx, uint64_t *tx){return 0;}
int phy_vlan_pvid_wan_get(void)
{
	return 0;
}
int phy_status_port_link_changed(unsigned int *p_link_changed){return 0;}

int phy_status_port_link_lan_all(unsigned int *p_link_on)
{
	return 0;
}

