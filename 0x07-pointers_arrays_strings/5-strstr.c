#include "main.h"
/**
*_strstr - locate a substring
*@haystack: string to be searched (nice one)
*@needle: substring to be searched for
*Return: the beginning of the substring in the string or NULL if not found
*/
char *_strstr(char *haystack, char *needle)
{
char *x = haystack, *y = needle;
while (*haystack)
{
while (*needle)
{
if (*haystack++ != *needle++)
{
break;
}
}
if (!*needle)
{
return (x);
}
needle = y;
x++;
haystack = x;
}
return (0);
}
