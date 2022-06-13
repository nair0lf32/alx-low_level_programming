#!/bin/bash
gcc -wall -fPIC -c *.c
gcc -shared -o liball.so *.o
