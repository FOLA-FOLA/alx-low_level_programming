#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - This function creates an array of chars
 *
 * @size: The Size of the uint.
 * @c: The char to be utilized.
 *
 * Return: Pointer to char (A char)
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	arr = (char *)malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i += 1)
	{
		arr[i] = c;
	}
	return (arr);
}
