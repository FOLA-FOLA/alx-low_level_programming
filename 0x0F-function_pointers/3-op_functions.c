#include "3-calc.h"
#include <stdio.h>
/**
 * op_add - This function adds two ints;
 *
 * @a: First integer
 * @b: Second integer.
 *
 * Return: An int which is the sum of the two ints
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - This function subtracts one int
 * from another int
 *
 * @a: First integer
 * @b: Second integer
 *
 * Return: A int which is the difference of the two ints.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - This function multiplies two ints
 *
 * @a: INT 1
 * @b: INTEGER 2
 *
 * Return: Product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - This function returns the
 * division of two integers.
 *
 * @a: First integer
 * @b: Second integer
 *
 * Return: An int, dividing a by b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - The remainder of the div of a by b
 *
 * @a: First integer
 * @b: Second integer
 *
 * Return: An int which is the remainder of 
 * the div between a and b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
