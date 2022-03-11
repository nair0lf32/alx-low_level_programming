#include <stdio.h>
#include <stdlib.h>
/**
*main -  print base 16 numbers (lowercase)
*Return: 0
*/
int main(void)
{
int i;
for (i = '0'; i <= '9'; i++)
{
putchar(i);
if(i == '9')
{
i = 'a';
for (; i <= 'f'; i++)
{
putchar(i);
}
break;
}
}
putchar('\n');
return (0);
}
