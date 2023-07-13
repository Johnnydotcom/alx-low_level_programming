#include <stdio.h>

/**
 * main - Entry point
 *
 * description - C program that prints sizes of various types on the computer it is compiled and run on
 *
 * Return: Always 0 (Success)
 */
int mai(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of an double: %lu byte(s)\n", sizeof(double));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
