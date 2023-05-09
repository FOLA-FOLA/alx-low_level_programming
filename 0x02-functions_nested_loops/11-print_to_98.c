#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - This function prints all natural
 * numbers from n - 98
 *
 * @n: This is the starting point of the number range
 *
 * Return: This function returns 0
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	else if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%i, ", n);
		}
	}
	printf("%d\n", n);
}
