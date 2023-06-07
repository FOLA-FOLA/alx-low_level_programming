#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - This function adds positive numbers.
 *
 * @argc: This is the no. of arguments passed.
 * @argv: These are the arguments themselves.
 *
 * Return: An int / Zero.
 */
int main(int argc, char **argv)
{
	int i, a, sum = 0;
	char *flag;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; argv[i]; i++)
	{
		a = strtol(argv[i], &flag, 10);
		if (*flag)
		{
			printf("Error");
			return (1);
		}
		else
			sum += a;
	}
	printf("%i\n", sum);
	return (0);
}
