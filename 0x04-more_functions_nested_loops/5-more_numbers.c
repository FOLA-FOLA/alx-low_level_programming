#include "main.h"
/**
 * more_numbers - This function prints 10 times the numbers
 * from 10 to 14, followed by a new line.
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 14; i++)
	{
		if (i < 10)
		{
			_putchar(i + '0');
		}
		else
		{
			_putchar('1' + ((i % 10) + '0'));
		}
	}
	_putchar('\n');
}
