#include "main.h"
/**
*puts_half -  prints the second half of a string
*@str: a pointer to a string
*Return: nothing
*/
void puts_half(char *str)
{
int length = _strlen(str);

if (length % 2 == 0)
{
length /= 2;
}
else
{
length = (length + 1) / 2;
}
while (str[length] != '\0')
{
_putchar(str[length]);
length++;
}
_putchar('\n');
}
/**
*_strlen -  determine the length of a string
*@s: a pointer to a string
*Return: the length of the string
*/
int _strlen(char *s)
{
int i = 0;

while (s[i] != '\0')
{
i++;
}
return (i);
}
