#include "main.h"
/**
 * print_most_numbers - This function prints all numbers
 * from 0 - 9 except 2 and 4
 *
 * Return: Void
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i);
		if (i == 2 || i == 4)
			continue;
	}
	_putchar('\n');
}
