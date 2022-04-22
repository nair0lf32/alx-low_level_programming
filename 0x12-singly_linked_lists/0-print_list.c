#include "lists.h"
/**
*print_list - prints all the elements of a list
*@h: pointer to the list
*Return: the number of nodes
*/
size_t lrint_list(const list_t *h)
{
const list_t *l = h;
size_t s = 0;
while (l != NULL)
{
if (l->str != NULL)
{
printf("[%d] %s\n", l->len, l->str);
}
else
{
printf("[0] (nil)\n");
}
s += 1;
l = l->next;
}
return (s);
}
