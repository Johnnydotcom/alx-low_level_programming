#include <stdio.h>
#include "main.h"

/**
 * puts_half - print last half of string
 * @str: string that is printed
 *
 * Return: Always 0 (Success)
 */

void puts_half(char *str)
{
	int string = 0, n, i;

	while (str[string] != '\0')
	{
		string++;
	}
	if (string % 2 == 0)
	{
		for (i = string / 2; str[i] != '\0'; i++)
		{
			_putchar (str[i]);
		}
	}
	else if (string % 2)
	{
		for (n = (string - 1) / 2; n < string - 1; n++)
			_putchar(str[n + 1]);
	}
	_putchar('\n');
}
