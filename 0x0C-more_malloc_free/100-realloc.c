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
char *copy, *new_ptr;
unsigned int i;
if (ptr != NULL)
{
copy = ptr;
}
else
{
return (malloc(new_size));
}
if (new_size == old_size)
{
return (ptr);
}
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (0);
}
new_ptr = malloc(new_size);
if (new_ptr == NULL)
{
return (0);
}
for (i = 0; i < (old_size || i < new_size); i++)
{
*(new_ptr + i) = copy[i];
}
free(ptr);
return (new_ptr);
}
