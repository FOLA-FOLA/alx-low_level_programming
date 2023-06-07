#include "main.h"
/**
 * ck - This function check the square root.
 *
 * @c: Integer
 * @g: Another integer.
 *
 * Return: Integer.
 */
int ck(int c, int g)
{
	if (c * c == g)
	{
		return (c);
	}
	if (c * c > g)
	{
		return (-1);
	}
	return (ck(c + 1, g));
}
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
	if (n == 0)
	{
		return (0);
	}
	return (ck(1, n));
}
