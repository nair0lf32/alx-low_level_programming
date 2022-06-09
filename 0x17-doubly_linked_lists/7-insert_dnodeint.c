#include "lists.h"
/**
sum_dlistint - sums all the data in a dlistint_t list
*@head: pointer to the head of the list
*Return: the sum of all the data in the list or 0 if empty
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node;
dlistint_t *temp;
unsigned int i;
if (h == NULL)
{
return (NULL);
}
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->n = n;
if (idx == 0)
{
new_node->next = *h;
new_node->prev = NULL;
if (*h)
{
(*h)->prev = new_node;
}
*h = new_node;
return (new_node);
}
temp = *h;
for (i = 0; i < idx - 1; i++)
{
if (temp->next == NULL)
{
return (NULL);
}
temp = temp->next;
}
new_node->next = temp->next;
new_node->prev = temp;
if (temp->next)
{
temp->next->prev = new_node;
}
temp->next = new_node;
return (new_node);
}
