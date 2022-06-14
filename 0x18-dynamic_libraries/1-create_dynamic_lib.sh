#!/bin/bash
gcc -g -fPIC *.c -shared -o liball.so
export LD_LIBRARY_PATH=$PWD:$LD_LIBRARY_PATH
