#include "main.h"
/**
*_isalpha -  print the sign of a number
*@n: number to check
*Return: 1 and print + if positive, -1 and print - if negative, 0 and print 0 if 0
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
