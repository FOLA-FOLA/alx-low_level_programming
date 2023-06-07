#include "variadic_functions.h"

/**
 * print_all - Print all arguments.
 *
 * @format: specify operation.
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int a;
	int fl;
	char *s;
	va_list a_list;

	va_start(a_list, format);
	a = 0;
	while (format != NULL && format[a] != '\0')
	{
		if (format[a] == 'c')
		{
			printf("%c", va_arg(a_list, int));
			fl = 0;
			break;
		}
		else if (format[a] == 'i')
		{
			printf("%i", va_arg(a_list, int));
			fl = 0;
			break;
		}
		else if (format[a] == 'f')
		{
			printf("%f", va_arg(a_list, double));
			fl = 0;
			break;
		}
		else if(format[a] == 's')
		{
			s = va_arg(a_list, char *);
			if (s == NULL)
				s = "(nil)";
			printf("%s", s);
			fl = 0;
			break;
		}
		else
		{
			fl = 1;
			break;
		}
		if (format[a + 1] != '\0' && fl == 0)
			printf(", ");
		a++;
	}
	printf("\n");
	va_end(a_list);
}
