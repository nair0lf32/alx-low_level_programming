#include "main.h"
/**
*print_line -  print a line n times long
*Return: nothing
*/
void print_line(int n)
{
int lenght;
if (n < 0)
{
for (lenght = 0; lenght <= n; lenght++)
{
_putchar('_');
}
_putchar('\n');
}
else
{
_putchar('\n');
}
}
