#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * prtprgnm - This function prints its own name.
 * if renamed, this function can print its own name
 * without needing to recompile.
 *
 * @argc: program count
 * @argv: - The argument to print
 *
 * Return: void
 */
int prtprgnm(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);`
}
