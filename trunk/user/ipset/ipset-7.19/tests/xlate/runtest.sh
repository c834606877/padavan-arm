#!/bin/bash

DIFF=$(which diff)
if [ ! -x "$DIFF" ] ; then
	echo "ERROR: missing diff"
	exit 1
fi

ipset=${IPSET_BIN:-../../src/ipset}
ipset_xlate=${IPSET_XLATE_BIN:-$(dirname $0)/ipset-translate}

$ipset restore < xlate.t
rc=$?
$ipset destroy
if [ $rc -ne 0 ]
then
	echo -e "[\033[0;31mERROR\033[0m] invalid test input"
	exit 1
fi

TMP=$(mktemp)
$ipset_xlate restore < xlate.t &> $TMP
if [ $? -ne 0 ]
then
	cat $TMP
	echo -e "[\033[0;31mERROR\033[0m] failed to run ipset-translate"
	exit 1
fi
${DIFF} -u xlate.t.nft $TMP
if [ $? -eq 0 ]
then
	echo -e "[\033[0;32mOK\033[0m] tests are fine!"
else
	echo -e "[\033[0;31mERROR\033[0m] unexpected ipset to nftables translation"
fi
