#include "main.h"
/**
*_memcpy - cpoies memory area
*@dest: pointer to the destination memory area
*@src: pointer to the source memory area
*@n: the number of bytes to be copied
*Return: the pointer to the destination memory area
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
