#!/bin/sh

set -e

CMD=$(cat <<EOF
for x in \$(seq 0 127); do
    echo "create h\$x hash:ip"
    echo "create l\$x list:set timeout 10 comment"
done | ipset restore
for x in \$(seq 0 127); do
    for y in \$(seq 0 127); do
        echo "add l\$x h\$y timeout 1000 comment \"l\$x h\$y\""
    done
done | ipset restore
# Wait for GC
sleep 15
EOF
)

for x in seq 0 123; do
    unshare -Urn bash -c "$CMD"
done
