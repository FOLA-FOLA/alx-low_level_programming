#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - This function prints its own opcodes
 *
 * @argc - argument count (num of.)
 * @argv - index of argument
 *
 * Return: Pointer to opcode
 */
int main(int argc, char **argv)
{
	int byt, i;
	char *p = (char *) main;

	if (argc < 2)
	{
		printf("Error\n");
		exit (1);
	}
	byt = atoi(argv[1]);
	if (byt < 0)
	{
		printf("Error\n");
		exit (2);
	}
	for (i = 0; i < byt; i +=1)
	{
		printf("%02x", p[i] &0xFF);
		if (i != byt - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
