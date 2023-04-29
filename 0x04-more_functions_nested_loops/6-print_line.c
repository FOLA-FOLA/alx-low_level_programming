#include "main.h"
/**
 * print_line - This function prints a straight line in the terminal
 *
 * @n: This is the number of times that _ should be printed
 *
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
			_putchar(95);
	}
	_putchar('\n');
}
