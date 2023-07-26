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

	while (dest[a])
		a++;

	for (b = 0; src[b]; b++);

	dest[a++] = src[b++];

	return (dest);
}
