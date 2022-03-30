#include "main.h"
/**
*_sqrt_recursion - returns the natural square root of a number
*@n: the number
*Return: the sqrt of n, -1 if negative number
*/
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (0);
}
if (n == 1)
{
return (1);
}
return (_sqrt_recursion(n - 1) + 1);
}
