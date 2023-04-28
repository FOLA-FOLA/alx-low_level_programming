#include "main.h"
/**
 * mul - multiplies two integers
 *
 * @a: First integer to be multipliesd
 * @b: Second integer to be multiplied
 *
 * Return: This function returns 0
 */
int mul(int a, int b)
{
	int  m = a * b;
	int t;

	if (m < 9)
	{
		_putchar(m);
	}
	else if (m > 9 && m < 100)
	{
		_putchar((m / 10) - ((m % 10) * 0.1));
		_putchar(m % 100);
	}
	else if (m > 99 && m < 1000)
	{
		_putchar((m / 100) - ((m % 100) * 0.01));
		_putchar((m % 100) - ((m % 10) * 0.1));
		_putchar(m % 10);
	}
	else
	{
		_putchar((m / 1000) - ((m % 1000) * 0.001));
		_putchar((m % 1000) - ((m % 100) * 0.01));
		_putchar((m % 100) - ((m % 10) * 0.1));
		_putchar(m % 10);
	}
	return (0);
}
