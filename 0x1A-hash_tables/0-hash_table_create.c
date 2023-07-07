#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the hash table array
 * Return: pointer to the newly created hash table or NUll if operation fails
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hsh;
	hash_node_t **array;

	hsh = malloc(sizeof(hash_table_t));
	if (hsh == NULL)
		return (NULL);
	array = malloc(sizeof(hash_node_t *) * size);
	if (array == NULL)
		return (NULL);

	hsh->size = size;
	hsh->array = array;
	return (hsh);
}
