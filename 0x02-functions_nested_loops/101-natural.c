#include "main.h"
#include <stdio.h>
/**
 * main - This function prints the sum of
 * all the natural numbers below 1024 that 
 * are multiples of 3 and 5.
 *
 * Return: void.
 */
void main(void)
{
	int i;
	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 5 == 0 && i % 3 == 0)
			sum +=  i;
		else
			continue;
	}
	printf("%d\n", sum);
}
