
SRC_NAME=wireless-regdb-2023.09.01
SRC_URL=https://www.kernel.org/pub/software/network/wireless-regdb/wireless-regdb-2023.09.01.tar.xz


THISDIR = $(shell pwd)

CFLAGS += -fno-unwind-tables -fno-asynchronous-unwind-tables

all: download_test extract_test config_test
	cd $(SRC_NAME);\
	python db2fw.py ./regulatory.db db.txt

download_test:
	( if [ ! -f $(THISDIR)/$(SRC_NAME).tar.gz ]; then \
                wget -t5 --timeout=20 --no-check-certificate -O $(SRC_NAME).tar.gz $(SRC_URL); \
        fi )

extract_test:
	( if [ ! -d $(THISDIR)/$(SRC_NAME) ]; then \
                tar xf $(SRC_NAME).tar.gz; \
        fi )

config_test:
	( if [ -f ./config_done ]; then \
                echo "the same configuration"; \
        else \
                make clean;\
                make configure && touch config_done; \
        fi )

configure:
	touch ./config_done

clean:
	rm -f config_done
	rm -f $(SRC_NAME)/regulatory.db

romfs:
	mkdir -p $(ROMFSDIR)/lib/firmware/
	$(ROMFSINST) $(THISDIR)/$(SRC_NAME)/regulatory.db /lib/firmware/regulatory.db
