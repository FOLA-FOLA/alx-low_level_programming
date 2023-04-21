#include <stdio.h>
/**
 * main - prints out the size of each type
 *
 * Return: This function always returns 0
 */
int main(void)
{
	printf("Size of a char: %ld byte(s)\n", sizeof(char));
	printf("Size of an int: %ld byte(s)\n", sizeof(int));
	printf("Size of a long int: %ld byte(s)\n", sizeof(long));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(long int));
	printf("Size of a float: %ld byte(s)", sizeof(float));
	return (0); }
