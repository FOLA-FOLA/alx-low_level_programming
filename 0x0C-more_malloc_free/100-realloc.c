#include "main.h"
/**
 * _realloc - Reallocate memory without using realloc
 *
 * @ptr: Pointer to memory previously allocated.
 * @old_size: Bytes (Size of space formerly allocated)
 * @new_size: Bytes (size of new space)
 *
 * Return: Pointer (To new memory).
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *a;
	unsigned int i, ns = new_size;
	char *o = ptr;

	if (ptr == NULL)
	{
		a = malloc(new_size);
		return (a);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	a = malloc(new_size);
	if (a == NULL)
		return (NULL);
	if (new_size > old_size)
		ns = old_size;
	for (i = 0; i < n; i++)
		a[i] = o[i];
	free(ptr);
	return (a);
}
