#include "main.h"
#include <stdlib.h>
/**
*string_nconcat - concatenates two strings
*@s1: string 1
*@s2: string 2
*@n: number of bytes to copy from s2
*Return: pointer to new string or NULL if error
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *cstring;
unsigned int i, len = n;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
for (i = 0; s1[i]; i++)
{
len++;
}
cstring = malloc(sizeof(char) * (len + 1));
if (cstring == NULL)
{
return (NULL);
}
len = 0;
for (i = 0; s1[i]; i++)
{
cstring[len++] = s1[i];
}
for (i = 0; s2[i] && i < n; i++)
{
cstring[len++] = s2[i];
}
cstring[len] = '\0';
return (cstring);
}
