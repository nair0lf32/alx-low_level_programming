#include "main.h"
/**
*_strstr - locate a substring
*@haystack: string to be searched (nice one)
*@needle: substring to be searched for
*Return: the beginning of the substring in the string or NULL if not found
*/
char *_strstr(char *haystack, char *needle)
{
int i, j, k;
for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0; needle[j] != '\0'; j++)
{
if (haystack[i + j] != needle[j])
{
break;
}
}
if (needle[j] == '\0')
{
return (haystack + i);
}
}
return (0);
}
