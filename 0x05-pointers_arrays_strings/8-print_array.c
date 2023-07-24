#include <stdio.h>
#include "main.h"

/**
 * print_array - print an array
 * @a: array
 * @n: is the number of elements of the array to be printed
 *
 * Return: Always 0 (Success_
 */

void print_array(int *a, int n)
{
	int q;

	for (q = 0; q < n; q++)
		if (q != n - 1)
		printf("%d, ", a[q]);
		else
			printf("%d", a[q]);
	printf("\n");
}
