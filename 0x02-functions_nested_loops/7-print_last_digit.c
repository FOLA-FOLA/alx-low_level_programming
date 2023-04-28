#include "main.h"
/**
 * print_last_digit - This function prints the last
 * digit of the integer parameter
 *
 * @b: This is the integer whose last digit is to be printed.
 *
 * Return: This funtion returns the last digit of the integer
 * parameter.
 */
int print_last_digit(int b)
{
	int ld = b % 10;

	if (ld < 0)
	{
		ld *= -1;
		return (ld);
		_putchar(ld);
	}
	else
	{
		_putchar(ld);
		return (ld);
	}
}
