EXEC = traffic_daemon

CFLAGS += -Os -Wall -Wextra -std=c99 -D_GNU_SOURCE
CFLAGS += -I$(STAGEDIR)/include
LDFLAGS += -L$(STAGEDIR)/lib
LDLIBS += -lpcap

all: $(EXEC)

$(EXEC): traffic_daemon.c
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $< $(LDLIBS)

clean:
	rm -f $(EXEC)

romfs:
	$(STRIP) $(EXEC)
	$(ROMFSINST) -p +x $(EXEC) /usr/sbin/$(EXEC)
