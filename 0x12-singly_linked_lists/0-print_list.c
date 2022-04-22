#include "lists.h"
/**
*print_list - prints all the elements of a list
*@h: pointer to the list
*Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
size_t count = 0;
const list_t *tmp;
tmp = h;
while (tmp)
{
count++;
printf("%s\n", tmp->str);
tmp = tmp->next;
}
return (count);
}
