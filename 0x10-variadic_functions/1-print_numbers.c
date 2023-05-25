#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - This function prints numbers,
 * followed by a newline.
 *
 * @separator: This is the string to be printed
 * between each printed number.
 *
 * @n: The number of numbers passed.
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list p;

	va_start(p, n);

	for (i = 0; i < n - 1; i++)
	{
		printf("%u%s", va_arg(p, int), separator);
	}
	while (i < n)
	{
		printf("%u\n", va_arg(p, int));
		i++;
	}
}
