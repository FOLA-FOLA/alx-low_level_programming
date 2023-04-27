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

	if (c >= 0 && c <= 9)
	{
		_putchar('\n');
		return (1);
	}
	else
	{
		_putchar('\n');
		return (0);
	}
}
