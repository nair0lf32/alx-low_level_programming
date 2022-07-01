#include "hash_tables.h"
/**
*key_index - Gives the index of a key using the djb2 algorithm
*@key: key to get the index of
*@size: size of the array of the hash table
*Return: The index of the key.
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
return (hash_djb2(key) % size);
}
