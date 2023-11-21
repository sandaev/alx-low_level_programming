#include "lists.h"
/**
 * reverse_listint - Reverses a linked list
 * @head: double pointer to list
 * Return: Pointer to reversed list
 */
listint_t *reversed_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
