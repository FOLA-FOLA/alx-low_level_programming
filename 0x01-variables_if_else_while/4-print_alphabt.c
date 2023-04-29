#include <stdio.h>
/**
 * main - This function prints all the letters of the alphabet
 * except q and e
 *
 * Return: 0
 */
void main(void)
{
	char i;

	for (i = 97; i <= 122; i++)
	{
		if (i != 113 && i != 101)
		{
			putchar(i);
		}
	}
	putchar('\n');
}
