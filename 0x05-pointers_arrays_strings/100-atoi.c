#include "main.h"
/**
*_atoi -  converts a string to an integer
*@s: pointer to the source string
*Return: 0
*/
int _atoi(char *s)
{
int i = 1;
unsigned int num = 0;
do {
if (*s == '-')
{
i *= -1;
}
else if (*s >= '0' && *s <= '9')
{
num = num * 10 + (*s - '0');
}
else if (num > 0)
{
break;
}
else
{
return (0);
}
} while (*s++);
return (num *i);
}
