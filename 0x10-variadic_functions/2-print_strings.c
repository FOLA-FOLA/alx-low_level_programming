#include "variadic_functions"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - This function prints strings,
 * followed by a new line.
 *
 * @separator: The string to be printed between
 * the strings.
 * @n: The number of arguments passed.
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *s;
	unsigned int i;
	va_list p;

	va_start(p, n);
	if (separator == NULL)
		separator = "";
	for (i = 0; i < n; i++)
	{
		s = va_arg(p, char*);
		if (s == NULL)
		{
			s = ("nil");
		}
		printf("%S", s);
		if (i < n - 1)
			printf("%S", separator);
	}
	printf("\n");
	va_end(p);
}
