#include <stdlib.h>
#include <stdio.h>

#ifndef MAINH
#define MAINH
/**
 * struct listint_s - sindly linked list
 * @n: Integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
#endif /* #ifndef MAINH */
