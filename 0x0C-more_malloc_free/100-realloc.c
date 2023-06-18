#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block
 * @ptr: pointed to memory previously allocted
 *
 * @old_size: size in bytes for ptr
 *
 * @new_size: The new size in bytes
 *
 * Return: Pointer or null
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *mem;
	char *ptr_cpy, *tmp;
	unsigned int index;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		mem = malloc(new_size);
		if (mem == NULL)
		{
			return (NULL);
		}
		return (NULL);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr_cpy = ptr;
	mem = malloc(sizeof(*ptr_cpy) * new_size);
	if (mem == NULL)
	{
		free(ptr);
		return (NULL);
	}
	tmp = mem;
	for (index = 0; index < old_size && index < new_size; index++)
	{
		tmp[index] = *ptr_cpy++;
	}
	free(ptr);
	return (mem);
}
