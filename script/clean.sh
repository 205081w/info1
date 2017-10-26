#!/bin/bash

SUBDIRS=`find . -type d -name "*_dir"`

for DIRS in ${SUBDIRS}; do
    cd $DIRS
    MAKE=`make clean`
    cd ..
done

