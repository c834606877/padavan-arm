#!/bin/sh

SCRIPT_LOG="/tmp/wpa-supplicant-script.log"
: >> "$SCRIPT_LOG"
exec 2>> "$SCRIPT_LOG"
PS4='+ wpa_supplicant.sh pid=$$ time=$(date +%s) '
set -x

script_log()
{
	printf '%s wpa_supplicant.sh pid=%s: %s\n' "$(date +%s)" "$$" "$*" >> "$SCRIPT_LOG"
}

script_log "invoked: $0 $*"

CONF_DIR="/var/run/wpa_supplicant"
PID_DIR="/var/run"

get_phy()
{
	local ifname="$1"
	iw dev "$ifname" info 2>/dev/null | sed -n 's/^[[:space:]]*wiphy \([0-9][0-9]*\).*/\1/p'
}

sta_ifname()
{
	case "$1" in
		wl) echo "wlan1-sta" ;;
		rt) echo "wlan0-sta" ;;
		*) return 1 ;;
	esac
}

ap_ifname()
{
	case "$1" in
		wl) echo "wlan1" ;;
		rt) echo "wlan0" ;;
		*) return 1 ;;
	esac
}

sta_mac()
{
	local ap="$1"
	local mac
	local first second third fourth fifth sixth

	mac="$(cat "/sys/class/net/$ap/address" 2>/dev/null)" || return 1
	[ "${#mac}" -eq 17 ] || return 1

	IFS=: read -r first second third fourth fifth sixth <<EOF
$mac
EOF
	case "$first:$second:$third:$fourth:$fifth:$sixth" in
		??:??:??:??:??:??) ;;
		*) return 1 ;;
	esac

	sixth=$((0x$sixth + 1))
	if [ "$sixth" -gt 255 ]; then
		sixth=0
		fifth=$((0x$fifth + 1))
		if [ "$fifth" -gt 255 ]; then
			fifth=0
			fourth=$((0x$fourth + 1))
			if [ "$fourth" -gt 255 ]; then
				fourth=0
				third=$((0x$third + 1))
				if [ "$third" -gt 255 ]; then
					third=0
					second=$((0x$second + 1))
					if [ "$second" -gt 255 ]; then
						second=0
						first=$((0x$first + 1))
					fi
				fi
			fi
		fi
	fi

	printf '%02x:%02x:%02x:%02x:%02x:%02x\n' \
		$((0x$first)) $((0x$second)) $((0x$third)) \
		$((0x$fourth)) $((0x$fifth)) $sixth
}

nvram_prefix()
{
	case "$1" in
		wl) echo "wl_" ;;
		rt) echo "rt_" ;;
		*) return 1 ;;
	esac
}

pidfile()
{
	echo "$PID_DIR/wpa_supplicant.$(sta_ifname "$1").pid"
}

monitor_pidfile()
{
	echo "$PID_DIR/wisp.$(sta_ifname "$1").pid"
}

runtime_channel_file()
{
	echo "/var/run/hostapd/$(nvram_prefix "$1")channel"
}

is_mode4_ap()
{
	local radio="$1"
	local prefix

	prefix="$(nvram_prefix "$radio")" || return 1
	[ "$(nvram get "${prefix}mode_x")" = "4" ]
}

bridge_sta()
{
	local radio="$1"
	local sta
	local prefix

	sta="$(sta_ifname "$radio")" || return 1
	prefix="$(nvram_prefix "$radio")" || return 1
	if [ "$(nvram get "${prefix}sta_wisp")" != "1" ]; then
		brctl addif br0 "$sta" 2>/dev/null
	fi
}

unbridge_sta()
{
	local radio="$1"
	local sta

	sta="$(sta_ifname "$radio")" || return 1
	brctl delif br0 "$sta" 2>/dev/null
}

frequency_to_channel()
{
	case "$1" in
		2412|2417|2422|2427|2432|2437|2442|2447|2452|2457|2462|2467|2472)
			echo $((($1 - 2407) / 5))
			;;
		2484) echo 14 ;;
		5180|5200|5220|5240|5260|5280|5300|5320|5500|5520|5540|5560|5580|5600|5620|5640|5660|5680|5700|5720|5745|5765|5785|5805|5825)
			echo $((($1 - 5000) / 5))
			;;
		*) return 1 ;;
	esac
}

sync_wisp_hostapd()
{
	local radio="$1"
	local prefix="$2"
	local sta
	local log_file
	local status
	local state
	local freq
	local channel
	local current
	local channel_file
	local tmp_file

	sta="$(sta_ifname "$radio")" || return 1
	log_file="/tmp/hostapd-wisp-$sta.log"
	channel_file="$(runtime_channel_file "$radio")"

	while [ -r "$(monitor_pidfile "$radio")" ]; do
		status="$(wpa_cli -p "$CONF_DIR" -i "$sta" status 2>/dev/null)"
		state="$(printf '%s\n' "$status" | sed -n 's/^wpa_state=//p')"
		freq="$(printf '%s\n' "$status" | sed -n 's/^freq=//p')"
		printf '%s %s: scan monitor state=%s freq=%s\n' \
			"$(date +%s)" "$sta" "${state:-UNKNOWN}" "${freq:-NONE}" >> "$log_file"

		if [ "$state" = "COMPLETED" ] && [ -n "$freq" ]; then
			channel="$(frequency_to_channel "$freq")" || channel=""
			printf '%s %s: scan monitor mapped freq=%s to channel=%s\n' \
				"$(date +%s)" "$sta" "$freq" "${channel:-INVALID}" >> "$log_file"
			if [ -n "$channel" ]; then
				current="$(cat "$channel_file" 2>/dev/null)"
				[ -n "$current" ] || current="$(nvram get "${prefix}channel")"
				if [ "$channel" != "$current" ]; then
					printf '%s %s: channel change %s -> %s, restarting hostapd\n' \
						"$(date +%s)" "$sta" "${current:-NONE}" "$channel" >> "$log_file"
					tmp_file="${channel_file}.tmp.$$"
					mkdir -p "$(dirname "$channel_file")"
					printf '%s\n' "$channel" > "$tmp_file" &&
						mv -f "$tmp_file" "$channel_file"
					logger -t wpa_supplicant "${sta}: upstream frequency ${freq}, channel ${channel}; restarting hostapd"
					/usr/bin/hostapd.sh "restart_$radio" \
						>>/tmp/hostapd-wisp-$sta.log 2>&1
				fi
			fi
		fi
		sleep 30
	done
}

stop_radio()
{
	local radio="$1"
	local reason="$2"
	local sta
	local pid_file
	local pid
	local monitor_file
	local monitor_pid
	local channel_file

	script_log "stop_radio begin radio=$radio reason=${reason:-unknown}"

	sta="$(sta_ifname "$radio")" || return 1
	pid_file="$(pidfile "$radio")"
	monitor_file="$(monitor_pidfile "$radio")"
	channel_file="$(runtime_channel_file "$radio")"

	if [ -r "$monitor_file" ]; then
		monitor_pid="$(cat "$monitor_file")"
		script_log "monitor pid file found: $monitor_file pid=${monitor_pid:-empty}"
		case "$monitor_pid" in
			*[!0-9]*|'') ;;
			*) script_log "killing monitor pid=$monitor_pid"; kill "$monitor_pid" 2>/dev/null ;;
		esac
	fi
	rm -f "$monitor_file"

	if is_mode4_ap "$radio"; then
		/usr/bin/hostapd.sh "stop_$radio" >/dev/null 2>&1
	fi
	unbridge_sta "$radio"
	rm -f "$channel_file"

	if [ -r "$pid_file" ]; then
		pid="$(cat "$pid_file")"
		script_log "wpa pid file found: $pid_file pid=${pid:-empty}"
		case "$pid" in
			*[!0-9]*|'') ;;
			*) script_log "killing wpa_supplicant pid=$pid"; kill "$pid" 2>/dev/null ;;
		esac
	fi

	if command -v wpa_cli >/dev/null 2>&1; then
		script_log "sending wpa_cli terminate interface=$sta"
		wpa_cli -p "$CONF_DIR" -i "$sta" terminate >/dev/null 2>&1
	fi

	sleep 1
	rm -f "$pid_file"

	if iw dev "$sta" info >/dev/null 2>&1; then
		script_log "deleting STA interface=$sta"
		iw dev "$sta" del
	fi
	script_log "stop_radio end radio=$radio reason=${reason:-unknown}"
}

start_radio()
{
	local radio="$1"
	local sta
	local ap
	local prefix
	local phy
	local conf
	local pid_file
	local mac
	local monitor_pid

	sta="$(sta_ifname "$radio")" || return 1
	ap="$(ap_ifname "$radio")" || return 1
	prefix="$(nvram_prefix "$radio")" || return 1
	conf="$CONF_DIR/wpa-$sta.conf"
	pid_file="$(pidfile "$radio")"
	monitor_pid="$(monitor_pidfile "$radio")"

	[ -x /usr/sbin/wpa_supplicant ] || {
		echo "wpa_supplicant is not installed" >&2
		return 1
	}

	stop_radio "$radio" "start"

	/usr/bin/wpa_supplicant_genconf.sh "$sta" "$prefix" || return 1
	if [ ! -s "$conf" ]; then
		if is_mode4_ap "$radio"; then
			/usr/bin/hostapd.sh "start_$radio" \
				>>/tmp/hostapd-wisp-$(sta_ifname "$radio").log 2>&1
		fi
		return 0
	fi

	phy="$(get_phy "$ap")"
	[ -n "$phy" ] || {
		echo "cannot find PHY for $ap" >&2
		return 1
	}
	mac="$(sta_mac "$ap")" || {
		echo "cannot determine MAC for $ap" >&2
		return 1
	}

	iw phy "phy$phy" interface add "$sta" type managed addr "$mac" 2>/dev/null || {
		echo "cannot create $sta on phy$phy" >&2
		return 1
	}

	ip link set "$sta" up || {
		iw dev "$sta" del
		return 1
	}
	bridge_sta "$radio"

	mkdir -p "$CONF_DIR"
	# Keep the supplicant in the background, but retain verbose diagnostics.
	/usr/sbin/wpa_supplicant -B -Dnl80211 -i "$sta" -c "$conf" -P "$pid_file" \
		-ddd  -f "/tmp/wpa-supplicant-$sta.log" >/dev/null 2>&1
	script_log "wpa_supplicant launch returned=$? interface=$sta pid_file=$pid_file"

	if is_mode4_ap "$radio"; then
		# Keep the local AP available even while the upstream STA is scanning.
		/usr/bin/hostapd.sh "start_$radio" \
			>>/tmp/hostapd-wisp-$sta.log 2>&1
		: > "$monitor_pid"
		(set +x; sync_wisp_hostapd "$radio" "$prefix"; rm -f "$monitor_pid") &
		echo $! > "$monitor_pid"
	fi
}

case "$1:$2" in
	start_wl:) start_radio wl ;;
	start_rt:) start_radio rt ;;
	stop_wl:) stop_radio wl "command" ;;
	stop_rt:) stop_radio rt "command" ;;
	restart_wl:) stop_radio wl "restart"; start_radio wl ;;
	restart_rt:) stop_radio rt "restart"; start_radio rt ;;
	*)
		echo "Usage: $0 {start_wl|stop_wl|restart_wl|start_rt|stop_rt|restart_rt}" >&2
		exit 1
		;;
esac
