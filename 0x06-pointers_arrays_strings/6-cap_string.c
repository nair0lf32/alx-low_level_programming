#include "main.h"
/**
*cap_string - capitalizes a string characters
*@str: pointer to the string
*Return: pointer to the string 
*/
char *cap_string(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] + 32;
}
}
return (str);
}
