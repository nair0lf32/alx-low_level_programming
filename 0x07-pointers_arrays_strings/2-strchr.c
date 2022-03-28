#include "main.h"
/**
*_strchr - locates a character in a string
*@s: pointer to string
*@c: character to find
*Return: the address of the first occurrence of c, NULL if not found
*/
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
if (*s == c)
{
return (s);
}
return (0); /*NULL*/
}
