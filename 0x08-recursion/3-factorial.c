#include "main.h"
/**
 * factorial -Returns the factorial of an int n
 *
 * @n: The number whose factorial is to
 * be returned.
 *
 * Return: An integer.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
