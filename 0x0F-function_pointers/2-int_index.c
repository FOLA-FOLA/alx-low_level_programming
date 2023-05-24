#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - This function searches for an integer
 *
 * @array: This i sthe array to be searched.
 * @size: This is the sixe of the array.
 * @cmp: This is the function to search an array.
 *
 * Return: An integer.
 */
int int_index(int *array, int size, int(*cmp)(int))
{
	int i;

	if (cmp == NULL || array == 0)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if ((int)cmp(array) != 0)
			return (i);
	}
	return (-1);
}
