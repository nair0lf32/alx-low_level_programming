#include "lists.h"
/**
*add_node - adds a new node at the beginning of a list
*@h: pointer to the list
*Return: the address of the new element, or NULL if failed
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
new_node = malloc(sizeof(list_t));
if (new_node != NULL)
{
new_node->str = strdup(str);
new_node->len = _strlen(str);
new_node->next = *head;
}
else
{
return (NULL);
}
if (*head != NULL)
{
new_node->next = *head;
}
*head = new_node;
return (new_node);
}
/**
*_strlen - returns the length of a string
*@s: string
*Return: length of string
*/
int _strlen(const char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
