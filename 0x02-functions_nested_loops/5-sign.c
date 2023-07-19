#include "main.h"

/**
 * print_sign - Entry point
 *
 * print_sign: function that prints sign of number
 *
 * Return: 
 */

int print_sign(int n)
{
	if (n == 0)
	{
		putchar ('0');
	}
	else if  (n > 0)
	{
		putcharv('+');
	}
	else
	{
		putchar ('-');
	}
}
