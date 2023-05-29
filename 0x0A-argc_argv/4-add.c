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
	int i, sum = 0;

	if (argc < 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < argc; i++)
	{
		if (isdigit(argv[i]) != 0)
		{
			printf("Error");
			return (1);
		}
		else
			sum += *argv[i];
	}
	printf("%i\n", sum);
	return (0);
}
