#include <stdio.h>
#include "main.h"

/**
 * _strlen - string length
 * @s: string
 *
 * Return: Always 0 (Success)
 */

int _strlen(char *s)
{
	int len;

	len = 0;

	while (s[len] != '\0');
{
	len++;
}
	return (len);
}
