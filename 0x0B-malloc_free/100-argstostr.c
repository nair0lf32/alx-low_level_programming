#include "main.h"
#include <stdlib.h>
/**
*argstostr - concatenates all the arguments of the program
*@ac: number of arguments
*@av: array of arguments
*Return: pointer to the formed string or NULL
*/
char *argstostr(int ac, char **av)
{
int i, j, k, len;
char *str;
if (ac == 0 || av == NULL)
{
return (NULL);
}
for (i = 0, len = 0; i < ac; i++)
{
len += _strlen(av[i]);
}
str = malloc(sizeof(char) * (len + ac + 1));
if (str == NULL)
{
return (NULL);
}
for (i = 0, j = 0; i < ac; i++)
{
for (k = 0; av[i][k] != '\0'; k++)
{
str[j] = av[i][k];
j++;
}
if (i != ac - 1)
{
str[j] = '\n';
j++;
}
}
str[j] = '\0';
return (str);
}
/**
*_strlen - returns the length of a string
*@s: string to be measured
*Return: length of the string
*/
int _strlen(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
}
return (i);
}
