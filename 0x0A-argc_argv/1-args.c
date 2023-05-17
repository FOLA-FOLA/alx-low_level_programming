#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - This function prints the number of
 * arguments that a function has
 *
 * @argc: This is the number to be printed.
 * @argv: This is the argument(s) in the function.
 *
 * Return: void
 */
int main(int argc, char **argv)
{
	(void)argv;
	printf("%i\n", argc - 1);
	return (0);
}
