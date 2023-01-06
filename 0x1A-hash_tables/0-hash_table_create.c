#include "hash_tables.h"

/**
 * hash_table_create - This function creates a hash table
 * @size: This is the size of the array
 *
 * Return: Pointer to the newly created hash table on Success,
 * NULL otherwise
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	int i;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
	{
		return (NULL);
	}
	table->size = size;
	table->array = calloc(table->size, sizeof(hash_node_t *));

	for (i = 0; i < (int)table->size; i++)
	{
		table->array[i] = NULL;
	}

	return (table);
}
