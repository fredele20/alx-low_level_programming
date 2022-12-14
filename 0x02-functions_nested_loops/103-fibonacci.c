#include <stdio.h>

/**
 * main - print the sum of the even term of a fibonacci series
 *
 * Return: always 0 (Success)
 *
 */

int main(void)
{

	long int i, num1 = 1, num2 = 2, limit = 0, sum = 0;

	for (i = 2; limit <= 4000000; i++)
	{
		limit = num1 + num2;
		if (i % 2 == 0)
			sum = i + sum;

		num1 = num2;
		num2 = limit;
	}

	printf("%ld \n", sum);

	return (0);

}
