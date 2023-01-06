#include "hash_tables.h"

/**
 * key_index - This function returns the index of a key
 * @key: The key
 * @size: Size of the array of the hash table
 *
 * Return: The index of the key/value pair in the array
 * of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);
}
