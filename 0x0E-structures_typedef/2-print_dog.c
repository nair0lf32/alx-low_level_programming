#include "dog.h"
/**
*init_dog - initialize a variable of type struct dog.
*@d: pointer to dog structure
*Return: nothing
*/
void print_dog(struct dog *d)
{
if (d == NULL )
{
return;
}
if (d->name == NULL)
{
printf("Name: nil");
}
else
{
printf("Name: %s", d->name);
}
if (d->age < 0)
{
printf("Age: nil");
}
else
{
printf("Age: %f", d->age);
}
if (d->owner == NULL)
{
printf("Owner: nil");
}
else
{
printf("Owner: %s", d->owner);
}
}
