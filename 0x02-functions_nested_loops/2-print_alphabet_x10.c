#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * description: prints the alphabet x10 in lowercase
 *
 *
 *
 * Return: Always 0 (Success)
 */

int print_alphabet_x10(void)
{
	char alpha;
	int count = 0;

	while (count++ <= 9)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
			_putchar(alpha);
		_putchar('\n');
	}
}
