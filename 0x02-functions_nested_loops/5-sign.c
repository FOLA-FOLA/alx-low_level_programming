#include "main.h"
/**
 * print_sign - This funtion prints the sign of the integer parameter
 *
 * @n: This the integer being checked for
 * positivity or negativity.
 *
 * Return: This function returns 1 if number is positive
 * -1 if number is negative and 0 of number = 0
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar(0);
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('+');
		return (1);
	}
}
