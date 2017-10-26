#!/bin/bash

SUBDIRS=`find . -type d -name "*_dir"`

echo -n >> test.out

for DIRS in ${SUBDIRS}; do
    echo -e "\n-- ${DIRS} --"
    cd $DIRS
    MAKE=`./test.sh`
    echo $MAKE
    echo "--- $DIRS ---" >> ../test.out
    cat test.out >> ../test.out
    cd ..
done


