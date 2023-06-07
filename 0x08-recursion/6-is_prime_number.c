#include "main.h"
/**
 * ck - Check if number is prime.
 *
 * @c: An integer
 * @g: An integer
 *
 * Return: An integer
 */
int ck(int c, int g)
{
	if (g < 2 || g % c == 0)
		return (0);
	else if (c > g / 2)
		return (1);
	else
		return (ck(c + 1, g));
}
/**
 * is_prime_number - return if the number is prime.
 *
 * @n: The number to be checked.
 *
 * Return: Integer.
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (ck(2, n));
}
