#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
  * main - This function generates a random number
  * and then determines if it negative or positive
  *
  * Return: This funtion returns a value of 0
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
		printf("%i is negative\n", n);
	else
		printf("%i is positive\n", n);
	return (0);
}
