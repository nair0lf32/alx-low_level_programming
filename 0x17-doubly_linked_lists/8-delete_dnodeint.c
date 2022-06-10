#include "lists.h"
/**
*delete_dnodeint_at_index - deletes a node at a given position
*@head: pointer to the head of the list
*@index: index to delete the node
*Return: 1 if success, -1 if failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *temp;
unsigned int i;
if (!head || !*head)
{
return (-1);
}
if (index == 0)
{
temp = *head;
*head = (*head)->next;
free(temp);
return (1);
}
temp = *head;
while (i < index)
{
temp = temp->next;
i++;
if (!temp->next)
{
return (-1);
}
temp = temp->next;
}
temp->next = temp->next->next;
free(temp->next);
return (1);
}
