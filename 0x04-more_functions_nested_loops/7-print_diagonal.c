#include "main.h"
/**
*print_diagonal -  print a diagonal line n times long
*@n: number of times to print
*Return: nothing
*/
void print_diagonal(int n)
{
int lenght, space;
lenght = 0;
if (n > 0)
{
while (lenght < n)
{
lenght++;
space = lenght;
while (space > 1)
{
_putchar(' ');
space--;
}
_putchar('\\');
_putchar('\n');
}
}
else if (n <= 0)
{
_putchar('\n');
}
}
