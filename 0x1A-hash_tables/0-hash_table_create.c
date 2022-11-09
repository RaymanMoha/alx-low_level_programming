#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: size of the hash table.
 * Return: ptr to the hash table type, otherwise
 * NULL - if something goes wrong
 */

hash_table_t *hash_table_create(unsigned long int size)
{
<<<<<<< HEAD
     	HEAD
	hash_table_t  *ht;
hash_table_t *ht;
=======
	hash_table_t  *ht;
hash_table_t *ht;

>>>>>>> 3b071730132c5e67f69cbc4856aaf3ecdc84701c
if (!size)
return (NULL);

ht = calloc(1, sizeof(hash_table_t));
	if (!ht)
		return (NULL);
	ht->size = size;
	ht->array = calloc(size, sizeof(hash_node_t *));

if (!ht->array)
	{
		free(ht);
		return (NULL);
	}
	return (*ht)
}