#include "lists.h"
/**
*delete_dnodeint_at_index - deletes a node at a given position
*@head: pointer to the head of the list
*@index: index to delete the node
*Return: 1 if success, -1 if failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *temp = *head;
unsigned int i = 0;
if (!*head || dlistint_len(temp) < index + 1)
{
return (-1);
}
if (!index)
{
(*head) = temp->next;
if (temp->next)
{
temp->next->prev = NULL;
}
temp->next = NULL;
free(temp);
return (1);
}
while (i < index)
{
temp = temp->next;
i++;
}
temp->prev->next = temp->next;
if (temp->next)
{
temp->next->prev = temp->prev;
}
free(temp);
return (1);
}
