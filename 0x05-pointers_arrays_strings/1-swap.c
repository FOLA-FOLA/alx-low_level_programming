#include "main.h"
/**
 * swap_int - This function swaps the value
 * of two integers
 *
 * @a: This is the first integer to be swapped
 * @b: This is the second integer to be swapped
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int happy = *a;
	int joyful = *b;

	*a = joyful;
	*b = happy;
}
