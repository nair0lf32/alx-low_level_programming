#include "lists.h"
/**
sum_dlistint - sums all the data in a dlistint_t list
*@head: pointer to the head of the list
*Return: the sum of all the data in the list or 0 if empty
*/
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
dlistint_t *temp;
if (head == NULL)
{
return (0);
}
temp = head;
while (temp != NULL)
{
sum += temp->n;
temp = temp->next;
}
return (sum);
}
