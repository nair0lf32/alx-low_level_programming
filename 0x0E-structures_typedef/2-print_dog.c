#include "dog.h"
#include <stdio.h>
/**
*init_dog - initialize a variable of type struct dog.
*@d: pointer to dog structure
*Return: nothing
*/
void print_dog(struct dog *d)
{
if (d)
{
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner);
}
}
