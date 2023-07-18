#include "main.h"

/**
 * _islower - Entry point
 *
 * description: checks for lowercase character c
 *
 * Retun: 0 (Success)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return(0);
}
