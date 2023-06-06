#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - This function returns a pointer
 * to a 2d array, using width and height parameters.
 *
 * @height: This is the number of arrays to be nested.
 * @width: This is the length of each nested array.
 *
 * Return: A pointer to the new 2d array.
 */
int **alloc_grid(int width, int height)
{
	int **a;
	int j, i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	a = malloc(sizeof(int *) * width);

	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < width; i++)
	{
		a[i] = malloc(sizeof(int) * height);

		if (a[i] == NULL)
		{
			for (k = 0; k < i; k++)
			{
				free(a[k]);
			}
			free(a);
			return (NULL);
		}

		for (j = 0; j < height; j++)
		{
			a[i][j] = 0;
		}
	}
	return (a);

}
