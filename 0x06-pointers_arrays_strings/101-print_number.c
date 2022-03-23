#include "main.h"
/**
*print_number - prints an integer
*@n: the integer to print
*Return: nothing
*/
void print_numberber(int n)
{
unsigned int number = n;
if (n < 0)
{
_putchar('-');
number = -number;
}
if ((number / 10) > 0)
{
print_numberber(number / 10);
}
_putchar((number % 10) + '0');
}
