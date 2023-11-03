#include "main.h"
#include <stdlib.h>
/**
 * _realloc - Reallocates a memory block
 * @ptr: Previously allocated memory
 * @old_size: Size in bytes for ptr
 * @new_size: Size in bytes for the new memory block
 *
 * Return: ptr if new size = old size,
 *         NULL if new size = 0 and ptr is not NULL,
 *         Otherwise a pointer to newly allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *mem;
	char *ptr_c, *set;
	unsigned int idx;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		mem = malloc(new_size);

		if (mem == NULL)
			return (NULL);
		return (mem);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr_c = ptr;
	mem = malloc(sizeof(*ptr_c) * new_size);
	if (mem == NULL)
	{
		free(ptr);
		return (NULL);
	}
	set = mem;
	for (idx = 0; idx < old_size && idx < new_size; idx++)
		set[idx] = *ptr_c++;
	free(ptr);
	return (mem);
}
