#ifndef FUNTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stdio.h>
#include <stdlib.h>

/**
 *File:function_pointers.h
 *Desc:header file with function prototypes
 */
char _putchar(char c);
void print_name(char *name, void (*f)(char *));

#endif
