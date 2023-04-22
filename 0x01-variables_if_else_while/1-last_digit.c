#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - This function checks and returns if n is greater than 5
 * or equal to zero or less than 6 and prints the result.
 *
 * Return: This function returns a value of 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 10  > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, n % 10);
	else if (n % 10 == 0)
		printf("Last digit of %i is %i and is zero\n", n, n % 10);
	else
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, n % 10);
	return (0);
}
