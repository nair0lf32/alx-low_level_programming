#include "main.h"
/**
*print_to_98 - print all natural numbers from n to 98
*@n: input number
*Return: nothing (void)
*/
void print_to_98(int n)
{
if (n < 98)
{
if (n > 98)
{
while (n > 98)
{
_putchar('\n');
n--;
}
}
while (n <= 98)
{
_putchar(n + '0');
n++;
}
}
else
{
while (n >= 98)
{
_putchar('\n');
n--;
}
while (n < 98)
{
_putchar(n + '0');
n++;
}
}
}
