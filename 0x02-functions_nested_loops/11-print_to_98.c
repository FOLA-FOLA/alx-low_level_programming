#include "main.h"
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
	int i;

	if (n >= 98)
	{
		for (i = n; i >= 98; i--)
		{
			_putchar(i);
		}
	}
	else
	{
		for (i = n; i <= 98; i++)
		{
			_putchar(i);
		}
	}
}
