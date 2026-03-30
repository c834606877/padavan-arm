#!/bin/sh
conf_2.4G=/etc/hostapd.conf
conf_5G=/etc/hostapd_wlan1.conf

func_start(){
	start-stop-daemon -S -b -x hostapd -- ${conf_2.4G}
	start-stop-daemon -S -b -x hostapd -- ${conf_5G}
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
