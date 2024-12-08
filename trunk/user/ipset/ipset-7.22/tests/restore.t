# Check multi-set restore
0 ipset restore < restore.t.multi
# Save sets and compare
0 ipset save > .foo && diff restore.t.multi.saved .foo
# Delete all sets
0 ipset x
# Check auto-increasing maximal number of sets
0 ./setlist_resize.sh
# Create bitmap set with timeout
0 ipset create test1 bitmap:ip range 2.0.0.1-2.1.0.0 timeout 5
# Add element to bitmap set
0 ipset add test1 2.0.0.2 timeout 30
# Create hash set with timeout
0 ipset -N test2 iphash --hashsize 128 timeout 4
# Add element to hash set
0 ipset add test2 2.0.0.3 timeout 30
# Create list set with timeout
0 ipset -N test3 list:set timeout 3
# Add bitmap set to list set
0 ipset a test3 test1 timeout 30
# Add hash set to list set
0 ipset a test3 test2 timeout 30
# Flush list set
0 ipset f test3
# Destroy all sets
0 ipset x
# Remove the ip_set_list_set kernel module
0 rmmod ip_set_list_set
# Remove the ip_set_bitmap_ip kernel module
0 rmmod ip_set_bitmap_ip
# Remove the ip_set_hash_ip kernel module
0 rmmod ip_set_hash_ip
# eof
