#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * sum_them_all - This function returns the sum
 * of all of its parameters.
 *
 * @n: The num of args,
 *
 * Return: An int (unsigned), sum of the args.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum_of_args = 0;
	unsigned int i;

	va_list p;

	va_start(p, n);

	for (i = 0; i < n - 1; i++)
	{
		sum_of_args += va_arg(p, int);
	}
	va_end(p);

	return (sum_of_args);
}
