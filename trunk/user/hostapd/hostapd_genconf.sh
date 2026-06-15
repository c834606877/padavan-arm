#!/bin/sh

# Set the runtime configuration directory
CONF_DIR="/var/run/hostapd"
mkdir -p "$CONF_DIR"

# Function to calculate VHT/HE center frequency segments for 80/160MHz channels
calculate_center_freq() {
    local chan=$1
    local bw=$2
    if [ "$bw" = "2" ]; then
        if [ "$chan" -ge 36 ] && [ "$chan" -le 48 ]; then echo "42"; fi
        if [ "$chan" -ge 52 ] && [ "$chan" -le 64 ]; then echo "58"; fi
        if [ "$chan" -ge 100 ] && [ "$chan" -le 112 ]; then echo "106"; fi
        if [ "$chan" -ge 116 ] && [ "$chan" -le 128 ]; then echo "122"; fi
        if [ "$chan" -ge 132 ] && [ "$chan" -le 144 ]; then echo "138"; fi
        if [ "$chan" -ge 149 ] && [ "$chan" -le 161 ]; then echo "155"; fi
    elif [ "$bw" = "3" ]; then
        if [ "$chan" -ge 36 ] && [ "$chan" -le 64 ]; then echo "50"; fi
        if [ "$chan" -ge 100 ] && [ "$chan" -le 128 ]; then echo "114"; fi
    else
        echo "0"
    fi
}

# Function to generate hostapd.conf for a specific interface
generate_hostapd_conf() {
    local ifname=$1       # Physical interface name (wlan0 or wlan1)
    local prefix=$2       # NVRAM variable prefix (rt_ for 2.4G, wl_ for 5G)
    local conf_file="$CONF_DIR/hostapd-$ifname.conf"

    # Fetch primary interface configurations from Padavan NVRAM
    local ssid=$(nvram get "${prefix}ssid")
    local wpa_key=$(nvram get "${prefix}wpa_psk")
    local auth_mode=$(nvram get "${prefix}auth_mode")
    local channel=$(nvram get "${prefix}channel")
    local closed=$(nvram get "${prefix}closed")
    
    # Fetch wireless regulatory country code from Padavan NVRAM (e.g., US, CN)
    local country=$(nvram get "${prefix}country_code")

    # Read bandwidth and protocol standard settings
    local ht_bw=$(nvram get "${prefix}HT_BW")     # 0=20M, 1=40M, 2=80M, 3=160M
    local gmode=$(nvram get "${prefix}gmode")     # Pure integer (0 to 5) for 5G mode

    # Read MT7981 TXBF and MU-MIMO specific switches from Padavan NVRAM
    local txbf=$(nvram get "${prefix}txbf")       # 0 = Disabled, 1 = Enabled
    local mumimo=$(nvram get "${prefix}mumimo")   # 0 = Disabled, 1 = Enabled

    # Read expansion feature switches from NVRAM
    local wds_enable=$(nvram get "${prefix}wds_enable")
    local guest_enable=$(nvram get "${prefix}guest_enable")

    # Hardcode the standard hostapd hw_mode based on the physical interface name
    local final_hw_mode="g"
    if [ "$ifname" = "wlan1" ]; then
        final_hw_mode="a"
    fi

    # 1. Write basic physical and wireless attributes for the primary interface
    cat <<EOF > "$conf_file"
interface=$ifname
driver=nl80211
bridge=br0
ctrl_interface=/var/run/hostapd
ssid=$ssid
hw_mode=$final_hw_mode
channel=${channel:-6}
ieee80211n=1
auth_algs=1
ignore_broadcast_ssid=${closed:-0}
country_code=${country:-US}
ieee80211d=1
EOF

    # 2. Inject 802.11ac (VHT) and 802.11ax (HE) high-throughput extensions for 5G radio
    if [ "$ifname" = "wlan1" ]; then
        # Default HT40+ configuration for 5G setup to fix "mode (1)" constraint
        echo "ht_capab=[HT40+]" >> "$conf_file"
        
        # Check if 802.11ac (Wi-Fi 5) is supported (gmode 3, 4, 5 includes ac Mixed)
        if [ "${gmode:-4}" -ge 3 ]; then
            echo "ieee80211ac=1" >> "$conf_file"
            
            # Dynamically assemble vht_capab string based on TXBF and MU-MIMO status
            local vht_cap="[RXLDPC][SHORT-GI-80][SHORT-GI-160]"
            
            # Map TXBF to Wi-Fi 5 standard (VHT Beamformer / Beamformee capabilities)
            if [ "$txbf" = "1" ]; then
                vht_cap="${vht_cap}[SU-BEAMFORMER][SU-BEAMFORMEE]"
            fi
            
            # Map MU-MIMO to Wi-Fi 5 standard (VHT MU Beamformer capability)
            if [ "$mumimo" = "1" ]; then
                vht_cap="${vht_cap}[MU-BEAMFORMER]"
            fi
            
            # Write final vht_capab string to file
            echo "vht_capab=$vht_cap" >> "$conf_file"
            
            # Dynamically map VHT/HE operational bandwidth and channel switches
            if [ "$ht_bw" = "2" ]; then
                local center_freq=$(calculate_center_freq "$channel" "2")
                cat <<EOF >> "$conf_file"
vht_oper_chwidth=1
vht_oper_centr_freq_seg0_idx=${center_freq:-42}
EOF
            elif [ "$ht_bw" = "3" ]; then
                local center_freq=$(calculate_center_freq "$channel" "3")
                cat <<EOF >> "$conf_file"
vht_oper_chwidth=2
vht_oper_centr_freq_seg0_idx=${center_freq:-50}
EOF
            else
                echo "vht_oper_chwidth=0" >> "$conf_file"
            fi
        fi

        # Check if 802.11ax (Wi-Fi 6 HE) is preferred (gmode 5 = a/n/ac/ax Mixed)
        if [ "$gmode" = "5" ]; then
            echo "ieee80211ax=1" >> "$conf_file"
            
            # Dynamically handle Wi-Fi 6 HE Beamforming capabilities
            if [ "$txbf" = "1" ]; then
                cat <<EOF >> "$conf_file"
he_su_beamformer=1
he_su_beamformee=1
EOF
            else
                cat <<EOF >> "$conf_file"
he_su_beamformer=0
he_su_beamformee=0
EOF
            fi

            # Dynamically handle Wi-Fi 6 HE MU-MIMO capabilities
            if [ "$mumimo" = "1" ]; then
                echo "he_mu_beamformer=1" >> "$conf_file"
            else
                echo "he_mu_beamformer=0" >> "$conf_file"
            fi
        fi
    fi

    # Handle security mode for the primary interface
    if [ "$auth_mode" = "open" ] || [ -z "$wpa_key" ]; then
        echo "wpa=0" >> "$conf_file"
    else
        cat <<EOF >> "$conf_file"
wpa=2
wpa_key_mgmt=WPA-PSK
wpa_pairwise=CCMP
wpa_passphrase=$wpa_key
EOF
    fi

    # 3. Inject WDS parameters if 4-Address bridging mode is enabled
    if [ "$wds_enable" = "1" ]; then
        cat <<EOF >> "$conf_file"
wds_sta=1
wds_bridge=br0
wds_ifname=wds.$ifname.%d
ap_isolate=0
EOF
    else
        echo "ap_isolate=1" >> "$conf_file"
    fi

    # 4. Inject multi-BSSID virtual interface if Guest WiFi is enabled
    if [ "$guest_enable" = "1" ]; then
        local guest_ssid=$(nvram get "${prefix}guest_ssid")
        
        # Dynamically reference non-symmetric NVRAM variable names without using if
        local guest_auth_var="${prefix}guest_auth_mode"
        [ "$prefix" = "rt_" ] && guest_auth_var="rt_guest_wpa_mode"

        eval guest_key=\$\(nvram get \"${prefix}guest_wpa_psk\"\)
        eval guest_auth=\$\(nvram get \"\$guest_auth_var\"\)

        local ap_isolate=$(nvram get "${prefix}guest_ap_isolate")
        local guest_closed=$(nvram get "${prefix}guest_closed")
        
        cat <<EOF >> "$conf_file"

# Virtual interface block for Guest WiFi setup
bss=$ifname-1
ssid=$guest_ssid
ap_isolate=${ap_isolate:-1}
auth_algs=1
ignore_broadcast_ssid=${guest_closed:-0}
EOF

        # Dynamically handle security mode for the Guest interface
        if [ "$guest_auth" = "open" ] || [ -z "$guest_key" ]; then
            echo "wpa=0" >> "$conf_file"
        else
            cat <<EOF >> "$conf_file"
wpa=2
wpa_key_mgmt=WPA-PSK
wpa_pairwise=CCMP
wpa_passphrase=$guest_key
EOF
        fi
    fi
}

# --- Trigger the configuration generation logic ---
generate_hostapd_conf "wlan0" "rt_"
generate_hostapd_conf "wlan1" "wl_"

