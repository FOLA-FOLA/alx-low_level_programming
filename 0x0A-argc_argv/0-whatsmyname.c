#include <stdio.h>
#include <stdlib.h>
/**
 * main - The function prints its own name.
 *
 * @argc: This is the argument count.
 * @argv: This is the argument.
 *
 * Return: An int (0)
 */
int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
