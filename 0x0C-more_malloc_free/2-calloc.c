#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - This function allocates memory
 * for an array using malloc.
 *
 * @nmemb: number of elements in the array
 * or array lenght.
 *
 * @size: The size of each element in bytes.
 *
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int sta = nmemb * size, i;
	char *arr;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}
	arr = malloc(sta);

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < sta; i++)
		arr[i] = 0;
	return (arr);
}
