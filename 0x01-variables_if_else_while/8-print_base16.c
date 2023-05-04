#include <stdio.h>
/**
 * main - This function prints all the hexadecimal
 * numbers in lowercase
 *
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	for (j = 97; j <= 102; i++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
