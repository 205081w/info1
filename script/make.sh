#!/bin/bash

SUBDIRS=`find . -type d -name "*_dir" | sort`

echo -n > test.out

for DIRS in ${SUBDIRS}; do
    echo -e "\n-- ${DIRS} --"
    cd $DIRS
    MAKE=`./test.sh`
    echo $MAKE
    echo -e "\n\n----- $DIRS -----" >> ../test.out
    cat test.out >> ../test.out
    cd ..
done

