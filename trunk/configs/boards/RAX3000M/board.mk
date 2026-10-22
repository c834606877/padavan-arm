##################################################################
# Board PID # Board Name       # PRODUCT # Note
##################################################################
# K2P       # K2P              # MT7621  #
##################################################################

CFLAGS += -DBOARD_RAX3000M -DBOARD_MT7915_DBDC
BOARD_NUM_USB_PORTS=1
CONFIG_BOARD_RAM_SIZE=128

# Board-specific EEPROM fallback installed by the generic mt76 firmware
# packaging rule. RAX3000M is the eMMC layout; RAX3000M-NAND has its own
# board.mk and therefore keeps the generic fallback.
BOARD_SPECIFIC_DBDC = $(ROOTDIR)/configs/boards/RAX3000M/mt7981b-cmcc-rax3000m-emmc-dbdc.bin

USE_IPV6=1
