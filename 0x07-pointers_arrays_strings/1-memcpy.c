#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest - memory area to copied too
 * @src - to be copied
 * @n - to be copied
 *
 * Return: (dest)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	while (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
