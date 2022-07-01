#include "hash_tables.h"
/**
*hash_table_create - Creates a hash table.
*@size: size of the array.
*Return: pointer to the new table or NULL if error
*/
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *ht;
unsigned long int i = 0;
ht = malloc(sizeof(hash_table_t));
if (ht == NULL || size <= 0)
{
free(ht);
return (NULL);
}
ht->size = size;
ht->array = malloc(sizeof(hash_node_t *) * ht->size);
if (ht->array == NULL)
{
return (NULL);
}
for (i = 0; i < ht->size; i++)
{
ht->array[i] = NULL;
}
return (ht);
}
