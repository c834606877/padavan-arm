ifndef ROOTDIR
ROOTDIR=../..
endif

include boards.mk
include cflags.mk

CFLAGS += -fPIC
CFLAGS += -Wall -I. -I./include -I$(ROOTDIR)/$(LINUXDIR)/include/nvram -I$(KERNEL_HEADERS_PATH)

LDFLAGS += -L.

OBJS := shutils.o netutils.o rtutils.o defaults.o nvram_linux.o notify_rc.o bin_sem_asus.o flash_mtd.o pids.o gpioutils.o

all: libshared.so

libshared.so: $(OBJS)
	$(LD) -shared -o $@ $^

romfs:
	$(ROMFSINST) -S /lib/libshared.so

clean:
	rm -f *.o libshared.so
