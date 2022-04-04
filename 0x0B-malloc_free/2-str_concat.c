#include "main.h"
#include <stdlib.h>
/**
*str_concat - concatenates two strings
*@s1: string 1
*@s2: string 2
*Return: pointer to the concatenated string, NULL if failure
*/
char *str_concat(char *s1, char *s2)
{
char *concat;
int i, j;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
concat = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2) + 1));
if (concat == NULL)
{
return (NULL);
}
for (i = 0; s1[i] != '\0'; i++)
{
concat[i] = s1[i];
}
for (j = 0; s2[j] != '\0'; j++)
{
concat[i + j] = s2[j];
}
concat[i + j] = '\0';
return (concat);
}
/**
*_strlen - returns the length of a string
*@s: string to check
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
