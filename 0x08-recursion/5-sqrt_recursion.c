#include "main.h"
/**
*_sqrt_recursion - returns the natural square root of a number
*@n: the number
*Return: the sqrt of n, -1 if negative number
*/
int _sqrt_recursion(int n)
{
int i;
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (0);
}
for (i = 1; i * i <= n; i++)
{
if (i * i == n)
{
return (i);
}
}
return (_sqrt_recursion(n - i));
}
