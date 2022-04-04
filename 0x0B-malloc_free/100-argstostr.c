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
int i = ac, j, k = 0, len = 0, temp = 0;
char *str = NULL;
if (ac == 0 || av == NULL)
{
return (NULL);
}
while (ac--)
{
len += (_strlen(av[ac]) + 1);
}
str = (char *) malloc(len + 1);
if (str != NULL)
{
while (k < i)
{
for (j = 0; av[k][j] != '\0'; j++)
{
str[j + temp] = av[k][j];
}
str[temp + j] = '\n';
temp += (j + 1);
k++;
}
str[temp] = '\0';
}
else
{
return (NULL);
}
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
