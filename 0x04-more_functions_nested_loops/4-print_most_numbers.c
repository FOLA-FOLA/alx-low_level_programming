#include "main.h"
/**
 * print_most_numbers - This function prints the
 * numbers 0 - 9, followed by a newline.
 *
 * Return: Void
 */
void print_most_numbers(void)
{
	int tmp;

	for (tmp = 48; tmp <= 57; tmp++)
	{
		if (tmp != 50 && tmp != 52)
		{
			_putchar(tmp + '0');
		}
	}
	_putchar('\n');
}
