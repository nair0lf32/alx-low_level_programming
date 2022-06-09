#include "lists.h"
/**
sum_dlistint - sums all the data in a dlistint_t list
*@head: pointer to the head of the list
*Return: the sum of all the data in the list or 0 if empty
*/
int sum_dlistint(dlistint_t *head)
{
int sum = 0;

if (head == NULL)
{
return (0);
}
while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}
