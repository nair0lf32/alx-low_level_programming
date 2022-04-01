#!/bin/bash
gcc -Wall -c -pedantic -Werror -Wextra -std=gnu89 *.c 
ar -rc liball.a *.o
