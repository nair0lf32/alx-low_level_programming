#include "main.h"
/**
*_strncat -  concatenates two strings with a limit n of bytes
*and no null byte needed
*@src: pointer to the source string
*@dest: pointer to the destination string
*@n: number of bytes to copy from the source string
*Return: pointer to the destination string
*/
char *_strncat(char *dest, char *src, int n)
{
int i, j;
for (i = 0; dest[i] != '\0'; i++)
{
}
for (j = 0; j < n && src[j] != '\0'; j++)
{
dest[i + j] = src[j];
}
dest[i + j] = '\0';
return (dest);
}
