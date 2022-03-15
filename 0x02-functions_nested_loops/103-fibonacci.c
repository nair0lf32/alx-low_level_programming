#include <stdio.h>
/**
*main - prints fibonacci numbers (sum of even-valued terms)
*Return: nothing (void)
*/
int main(void)
{
unsigned long i, j, k, count, sum;
i = sum = 0;
j = 1;
for (count = 0; count < 50; count++)
{
k = i + j;
i = j;
j = k;
if (k % 2 == 0 && k < 4000000)
{
sum += k;
}
}
printf("%lu", sum);
return (0);
}
