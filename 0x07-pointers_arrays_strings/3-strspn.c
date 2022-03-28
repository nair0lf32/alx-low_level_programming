#include "main.h"
/**
*_strspn - gets the length of a prefix substring
*@s: pointer to number of bytes in substring
*@accept: pointer to the bytes that are part of the substring
*Return: s, the length of the prefix substring
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j, k;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
for (k = i; s[k] == accept[j]; k++)
{
if (s[k] == '\0')
{
return (k - i);
}
}
}
}
}
return (0);
}
