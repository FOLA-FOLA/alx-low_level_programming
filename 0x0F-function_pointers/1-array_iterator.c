#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - This function executes a function
 * given as a parameter on each element of an array.
 *
 * @array: This is the array to be iterated upon
 * @size: This is the size of the said array above
 * @action: This is a pointer to the function i need to use.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(*array);
		}
	}
	else
		return;
}
