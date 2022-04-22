#include "lists.h"
/**
*list_len - measures the length of a list
*@h: pointer to the list
*Return: the length of the list
*/
size_t list_len(const list_t *h)
{
const list_t *index = h;
size_t count = 0;
while (index != NULL)
{
count += 1;
index = index->next;
}
return (count);
}
