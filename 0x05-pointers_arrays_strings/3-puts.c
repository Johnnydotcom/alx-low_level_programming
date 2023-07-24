#include <stdio.h>
#include "main.h"

/**
 * _puts - prints a string
 * @str: string
 *
 * Return: Always 0 (Success)
 */

void _puts(char *str)
{

	char *c;
	int a;

	c = str;

	for (a = 0; c[a]; a++)
	{
		_putchar (c[a]);
	}
	_putchar('\n');
}
