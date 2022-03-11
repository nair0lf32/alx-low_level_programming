#include <stdio.h>
#include <stdlib.h>
/**
*main -  print the alphabet (lowercase except e and q)
*Return: 0
*/
int main(void)
{
int i;
for (i = 'a'; i <= 'z'; i++)
{
if (i == 'q' || i == 'e')
{
continue;
}
putchar(i);
}
putchar('\n');
return (0);
}
