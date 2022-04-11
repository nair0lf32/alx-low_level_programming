#include "dog.h"
/**
*init_dog - initialize a variable of type struct dog.
*@d: pointer to dog structure
*@name: pointer to name's string
*@age: age float
*@owner: pointer to owner's string
*Return: nothing
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
