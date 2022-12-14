#include <stdio.h>

/**
 * main - a program that computes and prints the
 * sum of all the multiples of 3 and 5 below 1024
 *
 * Return: always 0 (Success)
 */

int main(void)
{

	int i, sum;

	for (i = 1; i <= 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum = i + sum;
	}

	printf("Sum: %d\n", sum);

	return (0);

}
