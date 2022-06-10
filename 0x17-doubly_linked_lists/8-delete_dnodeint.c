#include "lists.h"
/**
*delete_dnodeint_at_index - deletes a node at a given position
*@head: pointer to the head of the list
*@index: index to delete the node
*Return: 1 if success, -1 if failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *temp, *prev;
unsigned int i;
if (!head || !*head)
{
return (-1);
}
if (index == 0)
{
return (delete_dnodeint(head));
}
temp = *head;
for (i = 0; temp && i < index; i++)
{
prev = temp;
temp = temp->next;
}
if (!temp)
{
return (-1);
}
prev->next = temp->next;
free(temp);
return (1);
}
