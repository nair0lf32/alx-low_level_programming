#include "main.h"
/**
*factorial - returns the factorial of a number
*@n: the given number
*Return: the factorial of the number, -1 if negative number
*/
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
