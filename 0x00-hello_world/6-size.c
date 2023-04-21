#include <stdio.h>
/**
 * main - prints out the size of each type
 *
 * Return: This function always returns 0
 */
int main(void)
{
	printf("Size of a char: %u byte(s)", sizeof(char));
	printf("Size of an int: %u byte(s)", sizeof(int));
	printf("Size of a long int: %u byte(s)", sizeof(long));
	printf("Size of a long long int: %u byte(s)", sizeof(long double));
	printf("Size of a float: %u byte(s)", sizeof(float));
	return (0); }
