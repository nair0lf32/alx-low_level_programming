#include "main.h"
/**
*_strcpy -  copies a string to the buffer
*@src: pointer to the source string
*@dest: pointer to the destination (buffer)
*Return: pointer to the buffer
*/
char *_strcpy(char *dest, char *src)
{
int i = 0;
while (*(src + i) != '\0')
{
*(dest + i) = *(src + i);
i++;
}
*(dest + i) = '\0';
return (dest);
}
