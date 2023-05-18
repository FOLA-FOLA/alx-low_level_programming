#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - cAllocated memory using
 * malloc and returns a pointer to the allocated space.
 *
 * Return: zero
 */
void *malloc_checked(unsigned int b)
{
	void *a = malloc(b);

	if (a == NULL)
	{
		return (98);
	}
}
