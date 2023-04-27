#include "main.h"
/**
 * _isdigit - Function checks if parameter
 * is a digit from or between 0 - 9
 *
 * @c: This is the charcter that is being checked for digit
 *
 * Return: This function returns 1 if condition is true
 * and 0 if otherwise.
 */
int _isdigit(int c)
{
	int i;
	int tmp = 0;

	for (i = 0; i <= 9; i++)
	{
		if (i == c)
			tmp += 1;
	}
	_putchar('\n');
	if (tmp > 0)
		return (1);
	else
		return (0);
}
