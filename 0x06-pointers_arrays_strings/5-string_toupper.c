#include "main.h"
/**
*string_toupper - converts a string characters to uppercase
*@str: pointer to the string
*Return: pointer to the string 
*/
char *string_toupper(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] -= 32;
}
}
return (str);
}
