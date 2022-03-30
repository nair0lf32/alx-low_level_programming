#include "main.h"
/**
*_sqrt_recursion - returns the natural square root of a number
*@n: the number
*Return: the sqrt of n, -1 if negative number
*/
int _sqrt_recursion(int n)
{
if (n == 0 || n == 1)
{
return (n);
}
return (_sqrt(0, n));
}
/**
* _sqrt - returns the square root of a number
* @x: the number
* @y: the square root
* Return: the square root of x
*/
int _sqrt(int x, int y)
{
if (x > y / 2)
{
return (-1);
}
else if (x * x == y)
{
return (x);
}
return (_sqrt(x + 1, y));
}
