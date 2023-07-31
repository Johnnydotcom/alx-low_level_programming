#include "main.h"

/**
 * _memset - main entry
 * @s: memory area to be filled with copy
 * @b: char to be copied
 * @n: number of times to copy b
 * Return: (s) success
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
