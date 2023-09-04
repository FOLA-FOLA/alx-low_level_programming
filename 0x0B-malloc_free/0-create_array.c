#include "main.h"
/**
 * create_array - This function creates and initializes
 * an array with a specific char
 *
 * @size: Size of array to be created.
 * @c: The char to be initialized.
 *
 * Return: The new array
 */
char *create_array(unsigned int size, char c)
{
	char *a = malloc(size);
	unsigned int i;

	if (a == 0 || size <= 0)
		return (0);

	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
