#include <stdio.h>

/**
 * main - Entry point
 *
 * description - print the alphabet
 *
 *Return:0 (Success)
 */

int main(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		putchar (alp);
			alp++;
	}
	putchar('\n');

	return (0);
}
