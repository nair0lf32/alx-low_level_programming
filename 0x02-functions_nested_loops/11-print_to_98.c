#include <stdio.h>
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
while (n <= 98)
{
printf("%d", n);
if (n != 98)
{
_putchar(',');
}
n++;
}
}
else if (n > 98)
{
while (n >= 98)
{
printf("%d", n);
if (n != 98)
{
_putchar(',');
}
n--;
}
}
else
{
printf("%d", 98);
}
_putchar('\n');
}
