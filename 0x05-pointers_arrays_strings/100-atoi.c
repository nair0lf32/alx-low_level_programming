#include "main.h"
/**
*_atoi -  converts a string to an integer
*@s: pointer to the source string
*Return: the integer or 0 if empty
*/
int _atoi(char *s)
{
int i, j = 0;
int result = 0;
int sign = -1;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == '-')
sign = sign * -1;
if (s[i] >= '0' && s[i] <= '9')
{
result *= 10;
result -= (s[i] - '0');
j = 1;
}
else if (j == 1)
{
break;
}
}
result = sign *result;
return (result);
}
