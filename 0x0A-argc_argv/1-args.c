#include <stdio.h>
#include <stdlib.h>
/**
 * main - This function prints the argc.
 *
 * @argc: This is the argument count.
 * @argv: The array of args.
 *
 * Return: An integer ( The argument count).
 */
int main(int argc, char **argv)
{
	(void)**argv;

	printf("%i\n", argc - 1);
	return (0);
}
