#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
*new_dog - creates a new dog.
*@name: pointer to dog's name
*@age: dog's age
*@owner: pointer to dog's owner
*Return: a new dog, or NULL if failed
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *doggo;
if (name == NULL || age < 0 || owner == NULL)
{
return (NULL);
}
doggo = malloc(sizeof(dog_t));
if (doggo == NULL)
{
return (NULL);
}
doggo->name = malloc(sizeof(char) * (_strlen(name) + 1));
if (doggo->name == NULL)
{
free(doggo);
return (NULL);
}
doggo->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
if (doggo->owner == NULL)
{
free(doggo->name);
free(doggo);
return (NULL);
}
doggo->name = _strcopy(doggo->name, name);
doggo->age = age;
doggo->owner = _strcopy(doggo->owner, owner);
return (doggo);
}
/**
*_strlen - returns the length of a string
*@s: string to be measured
*Return: length of string
*/
int _strlen(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
/**
*_strcopy - copies a string
*@dest: destination string
*@src: source string
*Return: pointer to destination string
*/
char *_strcopy(char *dest, char *src)
{
int i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}
