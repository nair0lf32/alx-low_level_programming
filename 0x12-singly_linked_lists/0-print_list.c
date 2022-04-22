#include "lists.h"
/**
*print_list - prints all the elements of a list
*@h: pointer to the list
*Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
size_t i = 0;
while (h != NULL)
{
printf("%s\n", h->str);
h = h->next;
i++;
}
return (i);
}
