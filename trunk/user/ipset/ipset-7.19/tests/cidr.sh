#!/bin/bash

set -e

NETS="0.0.0.0/1
128.0.0.0/2
192.0.0.0/3
224.0.0.0/4
240.0.0.0/5
248.0.0.0/6
252.0.0.0/7
254.0.0.0/8
255.0.0.0/9
255.128.0.0/10
255.192.0.0/11
255.224.0.0/12
255.240.0.0/13
255.248.0.0/14
255.252.0.0/15
255.254.0.0/16
255.255.0.0/17
255.255.128.0/18
255.255.192.0/19
255.255.224.0/20
255.255.240.0/21
255.255.248.0/22
255.255.252.0/23
255.255.254.0/24
255.255.255.0/25
255.255.255.128/26
255.255.255.192/27
255.255.255.224/28
255.255.255.240/29
255.255.255.248/30
255.255.255.252/31
255.255.255.254/32"

ipset="../src/ipset"

if which netmask >/dev/null 2>&1; then
	net_first_addr() {
		netmask -r $1 | cut -d - -f 1
	}
	net_last_addr() {
		netmask -r $1 | cut -d - -f 2 | cut -d ' ' -f 1
	}
elif which ipcalc >/dev/null 2>&1; then
	net_first_addr() {
		ipcalc $1 | awk '/^Address:/{print $2}'
	}
	net_last_addr() {
		# Netmask tool prints broadcast address as last one, so
		# prefer that instead of HostMax. Also fix for /31 and /32
		# being recognized as special by ipcalc.
		ipcalc $1 | awk '/^(Hostroute|HostMax):/{out=$2}
				 /^Broadcast:/{out=$2}
				 END{print out}'
	}
else
	echo "need either netmask or ipcalc tools"
	exit 1
fi

case "$1" in
net)
    $ipset n test hash:net

    while IFS= read x; do
    	$ipset add test $x
    done <<<"$NETS"

    while IFS= read x; do
    	first=`net_first_addr $x`
    	$ipset test test $first >/dev/null 2>&1
    	last=`net_last_addr $x`
    	$ipset test test $last >/dev/null 2>&1
    done <<<"$NETS"

    while IFS= read x; do
    	$ipset del test $x
    done <<<"$NETS"
    ;;
net,port)
    $ipset n test hash:net,port

    n=1
    while IFS= read x; do
    	$ipset add test $x,$n
    	n=$((n+1))
    done <<<"$NETS"

    n=1
    while IFS= read x; do
    	first=`net_first_addr $x`
    	$ipset test test $first,$n >/dev/null 2>&1
    	last=`net_last_addr $x`
    	$ipset test test $last,$n >/dev/null 2>&1
    	n=$((n+1))
    done <<<"$NETS"

    n=1
    while IFS= read x; do
    	$ipset del test $x,$n
    	n=$((n+1))
    done <<<"$NETS"
    ;;
net,iface)
    $ipset n test hash:net,iface

    $ipset add test 0.0.0.0/0,eth0
    n=1
    while IFS= read x; do
    	$ipset add test $x,eth$n
    	n=$((n+1))
    done <<<"$NETS"

    $ipset test test 0.0.0.0/0,eth0
    n=1
    while IFS= read x; do
    	$ipset test test $x,eth$n >/dev/null 2>&1
    	n=$((n+1))
    done <<<"$NETS"

    $ipset del test 0.0.0.0/0,eth0
    n=1
    while IFS= read x; do
    	$ipset del test $x,eth$n
    	n=$((n+1))
    done <<<"$NETS"
    ;;
*)
    echo "Usage: $0 net|net,port|net,iface"
    exit 1
    ;;
esac
$ipset x test
