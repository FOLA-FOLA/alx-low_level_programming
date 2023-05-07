#include "main.h"
#include <stdio.h>
/**
 * print_array - This function prints n elements of
 * an array, followed by a new line.
 *
 * @a: A is the array to be used
 * @n: n is the number of characters to be printed
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
	{
		printf("%i,", a[i]);
	}
	printf("%i \n", a[n]);
}
