#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print the last digit of random number generated.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;/*finds the last digit*/

	if (digit > 5)
	printf("Last digit of %d is %d and is greater than 5\n", n, digit);
	else if (digit == 0)
	printf("Last digit of %d is %d and is 0\n", n, digit);
	else if (digit < 6 && digit != 0)
	printf("Last digit of %d is %d and is less than 6 but not 0\n", n, digit);
	return (0);
}
