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
	n = rand() - RAND_MAX / 2;
	if (n == 0)
		printf("%d, is zero\n", n);
	else if (n > 1)
		printf("%d, is positive\n", n);
	else
		printf("%d, is negative\n", n);

	return (0);

}
