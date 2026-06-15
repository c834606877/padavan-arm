#!/bin/sh

#conf_2_4G=/etc/hostapd.conf
#conf_5G=/etc/hostapd_wlan1.conf


wl_ssid=`nvram get wl_ssid`
wl_psd=`nvram get wl_wpa_psk`


rt_ssid=`nvram get rt_ssid`
rt_psd=`nvram get rt_wpa_psk`

rt_ssid_temp="MT7981_WiFi6_2.4G"
wl_ssid_temp="MT7981_WiFi6_5G"
psd_tmp="12345678"

bash /usr/bin/hostapd_genconf.sh

func_start_wl(){

	sed "s/ssid=${rt_ssid_temp}/ssid=${rt_ssid}/g" /etc/hostapd.conf > /etc/hostapd_wlan0_cur.conf
	sed "s/wpa_passphrase=${psd_tmp}/wpa_passphrase=${rt_psd}/g" -i /etc/hostapd_wlan0_cur.conf 


	#start-stop-daemon -S -b -m -p /var/run/hostapd.wlan1.pid -x /usr/sbin/hostapd -- /etc/hostapd_wlan1_cur.conf
	start-stop-daemon -S -b -m -p /var/run/hostapd.wlan1.pid -x /usr/sbin/hostapd -- /var/run/hostapd/hostapd-wlan1.conf
}
func_start_rt(){
	sed "s/ssid=${wl_ssid_temp}/ssid=${wl_ssid}/g" /etc/hostapd_wlan1.conf > /etc/hostapd_wlan1_cur.conf
	sed "s/wpa_passphrase=${psd_tmp}/wpa_passphrase=${wl_psd}/g" -i /etc/hostapd_wlan1_cur.conf 

	#start-stop-daemon -S -b -m -p /var/run/hostapd.wlan0.pid -x /usr/sbin/hostapd -- /etc/hostapd_wlan0_cur.conf
	start-stop-daemon -S -b -m -p /var/run/hostapd.wlan0.pid -x /usr/sbin/hostapd -- /var/run/hostapd/hostapd-wlan0.conf
}

func_stop_rt(){

        start-stop-daemon -K \
             -p /var/run/hostapd.wlan0.pid \
             -x /usr/sbin/hostapd
	sleep 1
}

func_stop_wl(){
        start-stop-daemon -K \
             -p /var/run/hostapd.wlan1.pid \
             -x /usr/sbin/hostapd
	sleep 1

}

case "$1" in
start_rt)
    func_start_rt
    ;;
start_wl)
    func_start_wl
    ;;
stop_wl)
    func_stop_wl
    ;;
stop_rt)
    func_stop_rt
    ;;
restart_rt)
    func_stop_rt
    func_start_rt
    ;;
restart_wl)
    func_stop_wl
    func_start_wl
    ;;
*)
    echo "Usage: $0 { start | stop | restart }"
    exit 1
    ;;
esac
