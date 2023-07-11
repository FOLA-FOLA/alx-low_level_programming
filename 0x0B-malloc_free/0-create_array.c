#include "main.h"
/**
 * create_array - This function creates an array of
 * chars and initialises it with a speacific character
 *
 * @size: This is the size of the array.
 * @c: This is the initial char.
 *
 * Return: A pointer (to the array or null)
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	int i;

	if (size == 0)
		return (NULL);

	p = malloc(size);

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = size; i > 0; i -= 1)
	{
		p[i] = c;
	}
	p[0] = c;

	return (p);
}
