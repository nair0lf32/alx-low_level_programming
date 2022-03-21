#include "main.h"
/**
*swap_int -  swap the value of two integers
*@a: a pointer to an integer
*@b: a pointer to another integer
*Return: nothing
*/
void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
