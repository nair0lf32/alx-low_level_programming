#include <stdio.h>
#include <stdlib.h>
/**
*main -  print comibnation of single-digit numbers
*Return: 0
*/
int main(void)
{
int i;
for (i = '0'; i <= '9'; i++)
{
putchar(i);
putchar(',');
putchar(' ');
if (i == '9')
{
continue;
}
}
putchar('\n');
return (0);
}
