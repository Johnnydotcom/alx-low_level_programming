#include "main.h"

/**
 * _isalpha - Entry point
 *
 * @c: checks if c is a letter lowercase or upper
 *
 * Return: 1 if c is a letter else 0 (Success)
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c => 'Z'));
}
