#include "main.h"
/**
*is_prime_number - check if an integer is a prime number
*@n: the number
*Return: 1 if prime, 0 if not
*/
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
if (n == 2)
{
return (1);
}
if (n % 2 == 0)
{
return (0);
}
return (is_prime_number(n - 1));
}
