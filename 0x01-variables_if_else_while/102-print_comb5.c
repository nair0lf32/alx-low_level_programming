#include <stdio.h>
/**
*main -  print comibnation of two two-digit numbers
*Return: 0
*/
int main(void)
{
int i, j;
for (i = 0; i < 98; i++)
{
for (j = i + 1; j < 99; j++)
{
if (i != j)
{
putchar(i / 10 + '0');
putchar(i % 10 + '0');
putchar(32);
putchar(j / 10 + '0');
putchar(j % 10 + '0');
if (i / 10 != 9 || i % 10 != 8)
{
putchar(44);
putchar(32);
}
}
}
putchar(10);
return (0);
}
