#!/bin/sh

CONF_DIR="/var/run/wpa_supplicant"

mkdir -p "$CONF_DIR" || exit 1

escape_value()
{
	printf '%s' "$1" | sed 's/\\/\\\\/g; s/"/\\"/g'
}

channel_to_frequency()
{
	local channel="$1"

	case "$channel" in
		1|2|3|4|5|6|7|8|9|10|11|12|13)
			echo $((2407 + channel * 5))
			;;
		14)
			echo 2484
			;;
		36|40|44|48|52|56|60|64|100|104|108|112|116|120|124|128|132|136|140|144|149|153|157|161|165)
			echo $((5000 + channel * 5))
			;;
		*)
			return 1
			;;
	esac
}

is_hex_psk()
{
	case "$1" in
		????????????????????????????????????????????????????????????????)
			case "$1" in
				*[!0123456789abcdefABCDEF]*) return 1 ;;
				*) return 0 ;;
			esac
			;;
		*) return 1 ;;
	esac
}

write_network_value()
{
	local key="$1"
	local value="$2"

	if [ "$key" = "psk" ] && is_hex_psk "$value"; then
		printf '%s=%s\n' "$key" "$value"
	else
		printf '%s="%s"\n' "$key" "$(escape_value "$value")"
	fi
}

generate_conf()
{
	local ifname="$1"
	local prefix="$2"
	local conf_file="$CONF_DIR/wpa-$ifname.conf"
	local tmp_file="${conf_file}.tmp.$$"
	local ssid
	local psk
	local auth_mode
	local wpa_mode
	local crypto
	local country
	local bssid
	local channel
	local frequency
	local sta_auto

	case "$ifname:$prefix" in
		wlan0-sta:rt_|wlan1-sta:wl_) ;;
		*)
			echo "invalid interface or NVRAM prefix" >&2
			return 1
			;;
	esac

	ssid="$(nvram get "${prefix}sta_ssid")"
	psk="$(nvram get "${prefix}sta_wpa_psk")"
	auth_mode="$(nvram get "${prefix}sta_auth_mode")"
	wpa_mode="$(nvram get "${prefix}sta_wpa_mode")"
	crypto="$(nvram get "${prefix}sta_crypto")"
	country="$(nvram get "${prefix}country_code")"
	bssid="$(nvram get "${prefix}sta_bssid")"
	channel="$(nvram get "${prefix}channel")"
	sta_auto="$(nvram get "${prefix}sta_auto")"

	[ -n "$ssid" ] || {
		rm -f "$conf_file" "$tmp_file"
		return 0
	}

	{
		printf '%s\n' \
			'ctrl_interface=/var/run/wpa_supplicant' \
			'ap_scan=1'
		[ -n "$country" ] && printf 'country=%s\n' "$country"
		printf 'network={\n'
		write_network_value ssid "$ssid"
		if [ "$sta_auto" = "1" ]; then
			# Scan all channels so the upstream AP can move without changing SSID.
			printf '%s\n' 'bgscan="simple:30:-70:60"'
		elif [ -n "$channel" ] && [ "$channel" != "0" ]; then
			frequency="$(channel_to_frequency "$channel")" || {
				echo "invalid channel for $ifname: $channel" >&2
				return 1
			}
			printf 'scan_freq=%s\n' "$frequency"
		fi
		case "$bssid" in
			'') ;;
			??:??:??:??:??:??)
				case "$bssid" in
					*[!0123456789abcdefABCDEF:]*|*:??:??:??:??:??:??) echo "invalid BSSID for $ifname" >&2; return 1 ;;
					*) printf 'bssid=%s\n' "$bssid" ;;
					esac
				;;
			*) echo "invalid BSSID for $ifname" >&2; return 1 ;;
		esac
		printf 'scan_ssid=1\n'

		if [ "$auth_mode" = "open" ] || [ -z "$psk" ]; then
			printf 'key_mgmt=NONE\n'
		else
			printf 'key_mgmt=WPA-PSK\n'
			case "$wpa_mode" in
				1) printf 'proto=WPA\n' ;;
				2) printf 'proto=RSN\n' ;;
				*) printf 'proto=WPA RSN\n' ;;
			esac
			case "$crypto" in
				tkip) printf 'pairwise=TKIP\ngroup=TKIP\n' ;;
				*) printf 'pairwise=CCMP\ngroup=CCMP TKIP\n' ;;
			esac
			write_network_value psk "$psk"
		fi
		printf '%s\n' '}'
	} > "$tmp_file" || {
		rm -f "$tmp_file" "$conf_file"
		return 1
	}

	chmod 600 "$tmp_file"
	mv -f "$tmp_file" "$conf_file"
}

if [ "$#" -eq 0 ]; then
	status=0
	generate_conf wlan0-sta rt_ || status=1
	generate_conf wlan1-sta wl_ || status=1
	exit "$status"
elif [ "$#" -eq 2 ]; then
	generate_conf "$1" "$2"
else
	echo "Usage: $0 [wlan0-sta rt_|wlan1-sta wl_]" >&2
	exit 1
fi
