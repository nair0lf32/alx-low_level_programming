#include "lists.h"
/**
*print_list - prints all the elements of a list
*@h: pointer to the list
*Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
unsigned int len = 0;
while (h)
{
if (!h->str)
{
printf("[0x0] (nil)\n");
}
else
{
printf("[0x%p] (%s)\n", h, h->str);
}
h = h->next;
len++;
}
return (len);
}
