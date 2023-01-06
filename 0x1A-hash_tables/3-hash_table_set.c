#include "hash_tables.h"

/**
 * hash_table_set - Adds an elemet to the HAsh Table
 * @ht: Pointer to the HashTable
 * @key: Key
 * @value: Value to be added
 *
 * Return: 1 on success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	/* Create the node to be added */
	hash_node_t *node = create_node(key, value);

	/* Get the index for the node */
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *current_node = ht->array[index];

	if (current_node == NULL)
	{
		/* key does not exit */
		/* insert directly */
		ht->array[index] = node;
		return (1);
	}
	else
	{
		/* key exists so update value */
		if (strcmp(current_node->key, key) == 0)
		{
			strcpy(ht->array[index]->value, value);
			return (1);
		}
		else
		{
			/* There is collision */
			handle_collision(ht, node);
			return (1);
		}
	}

	return (0);
}
/**
 * create_node - Creates hash table node or item
 * @key: key
 * @value: value
 *
 * Return: Pointer to node
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *node = malloc(sizeof(hash_node_t));

	node->key = malloc(sizeof(key) + 1);
	node->value = malloc(sizeof(value) + 1);

	strcpy(node->key, key);
	strcpy(node->value, value);

	return (node);
}
/**
 * handle_collision - Handle collision in hash table
 * @ht: Pointer to hasTable
 * @node: pointer to node
 *
 * Return: Nothing
 */
void handle_collision(hash_table_t *ht, hash_node_t *node)
{
	hash_node_t **head;

	head = ht->array;
	node->next = *head;
	*head = node;
}
