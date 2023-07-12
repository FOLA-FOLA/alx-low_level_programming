#include <stdio.h>
#include <stdlib.h>
/**
 * main - This func prints out all its arguments.
 *
 * @argc: Argument count.
 * @argv: Arguments passed.
 *
 * Return: An integer.
 */
int main(int argc, char **argv)
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}

	return (0);
}
