#!/bin/bash

SUBDIRS=`find . -type d -name "*_dir"`

for DIRS in ${SUBDIRS}; do
    echo -e "\n-- ${DIRS} --"
    cd $DIRS
    MAKE=`./test.sh`
    echo $MAKE
    cd ..
done

