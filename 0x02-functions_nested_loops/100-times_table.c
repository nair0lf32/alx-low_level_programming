#include "main.h"
/**
*print_times_table -   prints the n times table
*@n: the number to print the times table for
*Return: nothing
*/
void print_times_table(int n)
{
int x = 0, y, num;
if (n < 0 || n > 15)
return;
while (x <= n)
{
for (y = 0; y <= n; y++)
{
num = x * y;
if (y == 0)
_putchar('0' + num);
else if (num < 10)
{
_putchar(' ');
_putchar(' ');
_putchar('0' + num);
}
else if (num < 100)
{
_putchar(' ');
_putchar('0' + num / 10);
_putchar('0' + num % 10);
}
else
{
_putchar('0' + num / 100);
_putchar('0' + (num - 100) / 10);
_putchar('0' + num % 10);
}
if (y < n)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
x++;
}
}
