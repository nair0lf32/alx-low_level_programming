#include "main.h"
#include <stdlib.h>
/**
*array_range - creates an array of integers
*@min: minimum value
*@max: maximum value
*Return: pointer to new array or NULL if failed
*/
int *array_range(int min, int max)
{
int *ptr;
int i;
int size;
if (min > max)
{
return (NULL);
}
size = max - min + 1;
ptr = malloc(size *sizeof(int));
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
ptr[i] = min + i;
}
return (ptr);
}
