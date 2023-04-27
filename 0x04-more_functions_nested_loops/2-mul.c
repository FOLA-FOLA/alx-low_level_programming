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

	for (t = 0; t <= 5; t++)
	{
		_putchar(m[t]);
	}
	_putchar('\n');
	return (0);
}
