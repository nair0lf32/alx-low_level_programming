#include <stdio.h>
#include <stdlib.h>
/**
*main -  print base 16 numbers (lowercase)
*Return: 0
*/
int main(void)
{
int i;
for (i = '0'; i <= 'f'; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
