#include "main.h"
#include <stdlib.h>
/**
*_realloc - reallocates a memory block using malloc and free
*@ptr:  pointer to the memory previously allocated
*@old_size: size, in bytes, of the allocated space for ptr
*@new_size: new size, in bytes of the new memory block
*Return: pointer to the new memory block, or NULL if failed
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *new_ptr;
unsigned int i;
if (new_size == old_size)
{
return (ptr);
}
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
if (ptr == NULL)
{
return (_calloc(new_size, 1));
}
new_ptr = malloc(new_size);
if (new_ptr == NULL)
{
return (NULL);
}
for (i = 0; i < old_size; i++)
{
new_ptr[i] = ((char *)ptr)[i];
}
free(ptr);
return (new_ptr);
}
/**
*_calloc - allocates memory for an array using malloc
*@nmemb: number of elements
*@size: size of each element
*Return: pointer to allocated memory or NULL if failed
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
unsigned int i;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
ptr = malloc(nmemb * size);
if (ptr != NULL)
{
for (i = 0; i < (nmemb * size); i++)
{
ptr[i] = 0;
}
return (ptr);
}
else
{
return (NULL);
}
}
