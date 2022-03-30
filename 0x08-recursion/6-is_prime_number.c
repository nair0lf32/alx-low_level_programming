#include "main.h"
/**
*is_prime_number - check if an integer is a prime number
*@n: the number
*Return: 1 if prime, 0 if not
*/
int is_prime_number(int n)
{
int i = n / 2;
if (n <= 1)
{
return (0);
}
return (is_prime(n, i));
}
/**
* is_prime - actually checks if n is prime
* @n: number to be tested
* @i: initial number
* Return: 1 if n is prime, 0 if not
*/
int is_prime(int n, int i)
{
if (i <= 1)
{
return (1);
}
else if (n % i == 0)
{
return (0);
}
return (is_prime(n, i - 1));
}
