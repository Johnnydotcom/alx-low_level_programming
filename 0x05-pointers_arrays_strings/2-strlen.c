#include <stdio.h>
#include "main.h"

/**
 * _strlen - length of a given string
 * @s: string
 *
 * Return: string length
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
