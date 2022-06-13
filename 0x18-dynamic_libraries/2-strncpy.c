#include "main.h"
/**
*_strncpy -  copies a string
*@src: pointer to the source string
*@dest: pointer to the destination string
*@n: number of bytes to copy from the source string
*Return: pointer to the destination string
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for (; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}
