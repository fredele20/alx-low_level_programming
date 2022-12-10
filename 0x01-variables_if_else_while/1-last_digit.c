#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * This program assigns a random number
 * to a variable each time it is executed
 *
 * Return: always 0 (Success)
 */

int main(void)
{

	int n;

	srand(time(0));
	n - rand() - RAND_MAX / 2;

	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	else if (n == 0)
		printf("Last digit of %d is %d and is zero\n", n, n % 10);
	else if (n < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);

	return (0)

}

