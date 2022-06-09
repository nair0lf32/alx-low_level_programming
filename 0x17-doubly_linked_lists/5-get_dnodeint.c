#include "lists.h"
/**
*get_dnodeint_at_index - returns the nth node of a dlistint_t list
*@head: pointer to the head of the list
*@index: index of the node to return
*Return: the nth node or NULL if not found
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i;
if (head == NULL)
{
return (NULL);
}
for (i = 0; i < index; i++)
{
if (head->next == NULL)
{
return (NULL);
}
head = head->next;
}
return (head);
}
