#!/bin/bash
gcc -g -fPIC -Werror -Wextra -pedantic *.c -shared -o liball.so
export LD_LIBRARY_PATH=$PWD:$LD_LIBRARY_PATH
