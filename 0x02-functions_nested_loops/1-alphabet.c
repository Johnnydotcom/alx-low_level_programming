#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * description: Print alphabet in lowercase,followed by a new line.
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void) /*prototype in main.h file*/
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)

		_putchar(letter);

	_putchar('\n');
}
