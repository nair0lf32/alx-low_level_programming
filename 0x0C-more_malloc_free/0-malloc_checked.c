#include "main.h"
#include <stdlib.h>
/**
*malloc_checked - allocates memory using malloc
*@b: size of memory to allocate (bytes)
*Return: pointer to allocated memory
*/
void *malloc_checked(unsigned int b)
{
void *p;
p = malloc(b);
if (p == NULL)
{
free(p);
p = NULL;
exit(98);
}
return (p);
}
