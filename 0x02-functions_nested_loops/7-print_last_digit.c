#include "main.h"
/**
*print_last_digit -  print the last digit of a number
*@n: input number
*Return: last digit of n
*/
int print_last_digit(int n)
{
if (n % 10 < 0)
{
return (-(n % 10));
}
else
{
return (n % 10);
}
}