#!/bin/bash
wget -q --output-document=$HOME/libwin.so https://github.com/nair0lf32/alx-low_level_programming/raw/main/0x18-dynamic_libraries/libwin.so
export LD_PRELOAD=$HOME/libwin.so
