#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - <F4>This function prints the result of the
 * multiplication between 2 numbers.
 *
 * @argc: This is the number of arguments passed.
 * @argv: This is the argument to be multiplied.
 *
 * Return: An int (The product).
 */
int main(int argc, char **argv)
{
	int o, l;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		o = atoi(argv[1]);
		l = atoi(argv[2]);
		printf("%i\n", o * l);
		return (0);
	}
}
