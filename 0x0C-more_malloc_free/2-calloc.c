#include "main.h"
#include <stdlib.h>
/**
*_calloc - allocates memory for an array using malloc
*@nmemb: number of elements
*@size: size of each element
*Return: pointer to allocated memory or NULL if failed
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
ptr = malloc(nmemb * size);
if (ptr == NULL)
{
return (NULL);
}
return (ptr);
}
