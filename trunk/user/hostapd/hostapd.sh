#!/bin/sh
#conf_2_4G=/etc/hostapd.conf
#conf_5G=/etc/hostapd_wlan1.conf

func_start(){
	start-stop-daemon -S -b -x hostapd -- /etc/hostapd.conf
	start-stop-daemon -S -b -x hostapd -- /etc/hostapd_wlan1.conf
}

func_stop(){
        killall -q hostapd
}

case "$1" in
start)
    func_start
    ;;
stop)
    func_stop
    ;;
restart)
    func_stop
    func_start
    ;;
*)
    echo "Usage: $0 { start | stop | restart }"
    exit 1
    ;;
esac
