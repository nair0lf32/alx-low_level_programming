#include "lists.h"
/**
*print_list - prints all the elements of a list
*@h: pointer to the list
*Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
const list_t *index = h;
size_t count = 0;
while (index != NULL)
{
if (index->str != NULL)
{
printf("[%d] %s\n", index->len, index->str);
}
else
{
printf("[0] (nil)\n");
}
count += 1;
index = index->next;
}
return (count);
}
