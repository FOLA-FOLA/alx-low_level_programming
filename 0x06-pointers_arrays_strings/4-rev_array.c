#include "main.h"
/**
 * reverse_array - This function reverses an
 * array of integers.
 *
 * @a: This the array to be reversed.
 * @n: The number of elements in the array.
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int j = 0;

	for (i = 0; i < n / 2; i++)
	{
		a[i] = j;
		a[i] = a[n - i - 1];
		a[n - i - i] = j;
	}
}
