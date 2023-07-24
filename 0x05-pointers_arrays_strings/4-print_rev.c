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

	while (tally >= 0)
	{
		if (s[tally] == '\0')
			break;
		tally++;
	}
	for (tally--; tally >= 0; tally--)
		_putchar(s[tally]);
	_putchar('\n');
}
