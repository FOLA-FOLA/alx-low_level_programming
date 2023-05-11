#include "main.h"
/**
 * _sqrt_recursion - This function returns the
 * natural square root of a number.
 *
 * @n: This is the number whose square root
 * is to be returned.
 *
 * Return: A natural number
 */
int _sqrt_recursion(int n)
{
	if (n < 4)
	{
		return (-1);
	}
	if (((n - 1) * (n - 1)) == n)
	{
		return (n - 1);
	}
	else
	{
		return (_sqrt_recursion(n - 1));
	}
}
