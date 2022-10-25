#include "lists.h"
/**
 * free_listint2 - Frees a listint_t list
 *
 * @head: double pointer to list
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
}
