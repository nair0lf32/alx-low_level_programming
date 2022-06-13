#include "main.h"
/**
*_strspn - gets the length of a prefix substring
*@s: pointer to number of bytes in substring
*@accept: pointer to the bytes that are part of the substring
*Return: the length of the prefix substring
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int c = 0;
char *p = accept;
while (*s++)
{
while (*accept++)
if (*(s - 1) == *(accept - 1))
{
c++;
break;
}
if (!(*--accept))
{
break;
}
accept = p;
}
return (c);
}
