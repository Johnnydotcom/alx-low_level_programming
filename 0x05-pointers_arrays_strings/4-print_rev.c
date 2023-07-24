#include <stdio.h>
#include "main.h"

/**
 * print_rev - Print ssssssssstring in reverse
 * @s: string to be converted
 *
 * Return: Always 0 (Success)
 */

void print_rev(char *s)
{
	int tally = 0;

	while (count >= 0)
	{
		if (s[count] == '\0')
			break;
		count++;
	}
	for (count--; count >= 0; count--)
		_putchar(s[count]);
	_putchar('\n');
}
