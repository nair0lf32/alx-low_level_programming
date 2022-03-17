#include <stdio.h>
/**
* main - print the largest n factor of 612852475143
* Return: 0
*/
int main(void)
{
long number = 612852475143;
int n;
while (n++ < number / 2)
{
if (number % n == 0)
{
number /= 2;
continue;
}
for (n = 3; n < number / 2; n += 2)
{
if (number % n == 0)
{
number /= n;
}
}
}
printf("%ld\n", number);
return (0);
}
