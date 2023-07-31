#include "main.h"

/**
 * _strchr - Locate a character in a string
 * @s: string to be searched
 * @c: character to be searched
 *
 * Return: s, first occurence of the character
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
