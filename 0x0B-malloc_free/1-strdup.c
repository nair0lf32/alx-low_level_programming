#include "main.h"
#include <stdlib.h>
/**
*_strdup - duplicates a string
*@str: string to duplicate
*Return:  pointer to the duplicated string, NULL if insufficient memory
*/
char *_strdup(char *str)
{
char *dup;
unsigned int i;
if (str == NULL)
{
return (NULL);
}
dup = malloc(sizeof(char) * _strlen(str) + 1);
if (dup == NULL)
{
return (NULL);
}    
for (i = 0; str[i] != '\0'; i++)
{
dup[i] = str[i];
}
dup[i] = '\0';
return (dup);
}
