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
do{
if (*s == '-')
{
i = -1;
}
if (*s >= '0' && *s <= '9')
{
num = num * 10 + (*s - '0');
}
s++;
} while (*s != '\0');
return (num * i);
}
