#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - This function creates an array of chars
 *
 * @unsigned int size - The Size of the uint.
 * @c - The char to be utilized.
 *
 * Return: Pointer to char (A char)
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	array = (char)malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);
	int i;

	for (i = 0; i < size; i += 1)
	{
		array[i] = c;
	}
	return (*array);
}
