#include "main.h"
/**
*print_diagonal -  print a diagonal line n times long
*@n: number of times to print
*Return: nothing
*/
void print_diagonal(int n)
{
int lenght, space;
if (n > 0)
{
for (lenght = 0; lenght < n; lenght++)
{
for (space = 0; space < lenght; space++)
{
_putchar(' ');
_putchar('\\');
}
if (lenght == (n - 1))
{
continue;
}
_putchar('\n');
}
}
_putchar('\n');
}
