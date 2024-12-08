#include <stdint.h>

int phy_ports_lan_power(int power_on){return 0;}
int phy_clear_mac_table(void){ return 0;}

int phy_status_port_link(int port_id_uapi, unsigned int *p_link_on){return 0;}
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

