#include "main.h"
/**
*print_rev -  prints a reversed string
*@s: a pointer to a string
*Return: nothing
*/
void print_rev(char *s)
{
int i = 0;
int len = _strlen(s);

while (i < len)
{
_putchar(s[len - 1]);
len--;
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
