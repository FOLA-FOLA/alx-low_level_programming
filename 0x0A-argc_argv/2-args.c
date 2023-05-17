#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - This function prints out all
 * the arguments passed into it, each on
 * a new line.
 *
 * @argc: This is the argument count.
 * @argv: These are the actual arguments.
 *
 * Return: zero.
 */
int main(int argc, char **argv)
{
	int f;

	for (f = 0; f < argc; f++)
		printf("%s\n", argv[f]);
	return (0);
}
