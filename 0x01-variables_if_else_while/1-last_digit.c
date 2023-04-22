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
	char last[22]= "Last digit of";

	if (n > 5)
		printf("%s is %i and is greater than 5\n", last, n);
	else if (n == 0)
		printf("%s is %i and is zero\n", last, n);
	else
		printf("%s is %i and is less than 6 and not 0\n", last, n);
	return (0);
}
