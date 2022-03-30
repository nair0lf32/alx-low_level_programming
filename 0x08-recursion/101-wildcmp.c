#include "main.h"
/**
*wildcmp - compares two strings
*@s1: the first string
*@s2: the second string
*Return: 1 if the strings are the same, 0 if not
*/
int wildcmp(char *s1, char *s2)
{
if (*s2 == '\0')
{
return (*s1 == '\0');
}
if (*s2 == *s1)
{
return (*s1 != '\0' && wildcmp(s1 + 1, s2 + 1));
}
if (*s2 == '*')
{
return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));
}
return (0);
}
