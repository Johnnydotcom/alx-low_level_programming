#include "main.h"

/**
 * _islower - Entry point
 *
 * @c: checks for lowercase character c
 *
 * Return: if c is lowercase 1 else 0 (Success)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
