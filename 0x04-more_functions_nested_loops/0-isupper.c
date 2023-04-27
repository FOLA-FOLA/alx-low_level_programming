#include "main.h"
/**
 * _isupper - checks if letter is uppercase or otherwise.
 * Parameters
 * @c: C is the argument whose case is being checked
 *
 * Return: This function returns 1 if letter is uppercase
 * and 0 if letter is not uppercase.
 */
int _isupper(int c)
{
	char i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == c)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	_putchar('\n');
}
