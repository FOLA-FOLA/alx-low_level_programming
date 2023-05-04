#include <stdio.h>
/**
 * main - This function prints out the alphabet in reverse
 * and in lowercase
 *
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 122; a >= 97; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
