#include <stdio.h>
#include "main.h"

/**
 * _strcat - append file
 * @dest: appended
 * @src: file being appended
 *
 * Return: dest (Success)
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;

	while (dest[a] != '\0')
		a++;

	for (b = 0; src[b] != '\0')
		b++;

	dest[a++] = src[b++];

	return (dest);
}
