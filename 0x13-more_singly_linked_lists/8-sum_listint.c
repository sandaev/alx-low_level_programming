#include "lists.h"

/**
 * sum_listint - Calculates the sum of all the data (n) of
 * a list
 *
 * @head: Pointer to list
 *
 * Return: 0 if listis empty, otherwise sum of data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
