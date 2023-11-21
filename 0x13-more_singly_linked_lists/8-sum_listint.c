#include "lists.h"
/**
 * sum_listint - Return the sum of all
 * the data of a listint_t linked list
 * @head: pointer to list
 * Return: sum of data; 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
