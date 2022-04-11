#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
*new_dog - creates a new dog.
*@name: pointer to dog's name
*@age: dog's age
*@owner: pointer to dog's owner
*Return: a new dof, or NULL if failed
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
{
return (NULL);
}
new_dog->name = name;
new_dog->age = age;
new_dog->owner = owner;
return (new_dog);
}
