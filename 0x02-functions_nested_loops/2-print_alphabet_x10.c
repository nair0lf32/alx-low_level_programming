#include "main.h"
/**
*print_alphabet_x10 -  print the alphabet ten times
*Return: void (nothing)
*/
void print_alphabet_x10(void)
{
int c;
int count = 0;
while(count <= 10)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar (c);
_putchar (10);
}
}
}