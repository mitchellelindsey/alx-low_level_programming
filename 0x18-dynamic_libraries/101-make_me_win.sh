#!/bin/bash
wget -P .. https://raw.githubusercontent.com/mitchellelindsey/alx-low_level_programming/master/0x18-dynamic_libraries/libtsst.so
export LD_PRELOAD="$PWD/../libtsst.so"
