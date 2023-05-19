#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - This function creates an array of integers
 *
 * @min: This is the minimum value in the array.
 * @max: This is the maximum value in the array.
 *
 * Return: A pointer) to the new array.
 */

int *array_range(int min, int max)
{
	int *arr;
	int h, i = 0;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * ((max - min) + 1));
	if (arr == NULL)
		return (NULL);

	for (h = min; h <= max && i <= max - min; h++)
	{
		arr[i] = h;
		i++;
	}

	return (arr);
}
