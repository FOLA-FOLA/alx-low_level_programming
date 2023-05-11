#include "main.h"
/**
 * _pow_recursion - This function returns x raised
 * to the power of y
 *
 * @x: Number to be raised to the power of y
 * @y: The power of x
 *
 * Return: An integer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
