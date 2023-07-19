#include "main.h"

/**
 * print_sign - Entry point
 *
 * @n: function that prints sign of number
 *
 * Return: 0, - or + (Success)
 */

int print_sign(int n)
{
	if (n == 0)
	{
		_putchar ('0');
	}
	else if  (n > 0)
	{
		_putchar ('+');
	}
	else
	{
		_putchar ('-');
	}
}
