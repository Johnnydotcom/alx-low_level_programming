#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Program that prints the alphabet
 * backwards from z to a
 *
 * Return: Always 0 (Success)
 */
int main()
{
	char letter;
	
	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar (letter);
	}
		putchar('\n');
	return 0;
}
