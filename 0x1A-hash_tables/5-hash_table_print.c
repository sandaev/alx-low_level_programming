#include "hash_tables.h"
/**
 * hash_table_print - This function prints a hash table
 * @ht: Pointer to hash table
 *
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *head;
	unsigned long int i;
	int count = len_ht(ht);
	int num = 0;

	if (count == 0)
	{
		printf("{}\n");
	}
	else
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i])
			{
				if (ht->array[i]->next)
				{
					head = ht->array[i];
					while (head->next != NULL)
					{
						printf("'%s': '%s', ", head->key, head->value);
						head = head->next;
					}
					num++;
				}
				if (num == count - 1)
				{
					printf("'%s': '%s'}\n", ht->array[i]->key, ht->array[i]->value);
				}
				else
				{
					printf("'%s': '%s', ", ht->array[i]->key, ht->array[i]->value);
					num++;
				}
			}
		}
	}
}
/**
 * len_ht - Function that determines the length of table (without collision)
 * @ht: Pointer to HashTable
 *
 * Return: Integer on Success, -1 otherwise
 */
int len_ht(const hash_table_t *ht)
{
	unsigned long int i;
	int count = 0;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			count++;
		}
	}
	return (count);
}
