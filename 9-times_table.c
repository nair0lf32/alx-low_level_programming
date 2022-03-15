#include "main.h"
/**
*times_table -   prints the 9 times table, starting with 0
*Return: nothing
*/
void times_table(void)
{
int x, y, n;
for (x = 0; x <= 9; x++)
{
_putchar('0');
_putchar(',');
_putchar(' ');
for (y = 1; y <= 9; y++)
{
n = (x * y);
if ((n / 10) > 0)
{
_putchar((n / 10) + '0');
}
else
{
_putchar(' ');
}
_putchar((n % 10) + '0');
if (y < 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
