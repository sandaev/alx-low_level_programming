#include <stdlib.h>
#include <stdio.h>
#ifndef MAINH
#define MAINH
/**
 * struct list_s - singly linked list
 * @str: string - (maoolc'ed string)
 * @len: length of the string
 * @next: Pointer to next node
 *
 * Description - singly linked list node structure
 */
typedef struct list_s
{
	char *s;
	unsigned int len;
	struct list_s *next;
} list_t;
size_t print_list(const list_t *h);
int _putchar(char c);
size_t list_len(const list_t *h);
#endif /* #ifndef MAINH */
