#include <stdio.h>
#include "main.h"

/**
 * swap_int - swap int values of a and b
 * @a: swap with b
 * @b:swap with a
 *
 * Return: Always 0 (Success)
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
