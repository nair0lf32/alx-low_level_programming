#!/bin/bash
gcc *.c -c -Wall -Werror -fpic
gcc *.o -shared -o liball.so
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
