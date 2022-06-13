#include "main.h"
/**
*_strpbrk - searches a string for any of a set of byte
*@s: pointer to the string to be searched
*@accept: pointer to the bytes that are to be searched for
*Return: the pointer to the bytes found or NULL if not found
*/
char *_strpbrk(char *s, char *accept)
{
int i, j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
return (s + i);
}
}
}
return (0); /*NULL*/
}
