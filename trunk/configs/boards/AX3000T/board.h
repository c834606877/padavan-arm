/* Xiaomi Mi Router AX3000T (RD03) - MT7981B / MT7976C / 256MB DDR3 / 128MB SPI-NAND */

#define BOARD_PID		"AX3000T"
#define BOARD_NAME		"AX3000T"
#define BOARD_DESC		"Xiaomi Mi Router AX3000T"
#define BOARD_VENDOR_NAME	"Xiaomi"
#define BOARD_VENDOR_URL	"http://www.mi.com/"
#define BOARD_MODEL_URL		"http://www.mi.com/"
#define BOARD_BOOT_TIME		30
#define BOARD_FLASH_TIME	120

#define BOARD_HAS_5G_11AC		1
#define BOARD_HAS_5G_11AX		1
#define BOARD_HAS_2G_11AX		1
#define BOARD_NUM_ANT_5G_TX		2
#define BOARD_NUM_ANT_5G_RX		2
#define BOARD_NUM_ANT_2G_TX		2
#define BOARD_NUM_ANT_2G_RX		2
#define BOARD_HAS_EPHY_L1000	1
#define BOARD_HAS_EPHY_W1000	1
#define BOARD_NUM_ETH_LEDS		0
#define BOARD_NUM_UPHY_USB3		0
#define BOARD_USB_PORT_SWAP		0

/* NOTE: 4 x GbE come from the MT7981 internal MT7531 switch - 1x WAN + 3x LAN,
 * all four are DSA user ports of the single GMAC0.  padavan's LAN/WAN names
 * come from the DTS port labels, see user/shared/netutils.h.
 */

#define USE_IPV6 1
