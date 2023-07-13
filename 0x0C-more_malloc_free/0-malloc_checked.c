#include "main.h"
/**
 * malloc_checked - This function allocates space using malloc
 *
 * @b: The space to be allocated.
 *
 * Return: Void.
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *c;

	if (b == 0)
	{
		exit (98);
	}

	c = malloc(sizeof(unsigned int));

	if (c == NULL)
	{
		exit (98);
	}

	return (c);
}
