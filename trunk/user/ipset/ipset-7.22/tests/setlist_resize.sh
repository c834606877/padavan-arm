#!/bin/sh

set -e
# set -x
# exec > setlist.res
# exec 2>&1

ipset=${IPSET_BIN:-../src/ipset}

loop=8

n=0
while [ $n -le 9 ]; do
    egrep '^(ip_set_|xt_set)' /proc/modules | while read x y; do
    	rmmod $x >/dev/null 2>&1
    done
    if [ "`egrep '^(ip_set_|xt_set)' /proc/modules`" ]; then
    	sleep 1s
    else
    	n=10
    fi
done
rmmod ip_set >/dev/null 2>&1

create() {
    n=$1
    while [ $n -le 1024 ]; do
      $ipset c test$n hash:ip
    	n=$((n+2))
    done
}

for x in `seq 1 $loop`; do
    # echo "test round $x"
    create 1 &
    create 2 &
    wait
    test `$ipset l -n | wc -l` -eq 1024 || exit 1
    $ipset x
    # Wait for destroy to be finished and reference counts releases
    n=0
    ref=0
    while [ $n -le 9 ]; do
    	ref=`lsmod|grep -w ^ip_set_hash_ip | awk '{print $3}'`
    	if [ $ref -eq 0 ]; then
    	    n=10;
    	else
    	    sleep 1s
    	    n=$((n+1))
    	fi
    done
    if [ "$ref" -ne 0 ]; then
    	lsmod
    	echo $ref
    fi
    test "$ref" -eq 0 || exit 1
    rmmod ip_set_hash_ip >/dev/null 2>&1
    rmmod ip_set >/dev/null 2>&1
done
