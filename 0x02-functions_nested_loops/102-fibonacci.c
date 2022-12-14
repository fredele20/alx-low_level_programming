#include <stdio.h>

/**
 * main - print the fibonacci of the first 50 numbers starting 1 and 2
 *
 * Return: always 0 (Success)
 *
 */

int main(void)
{

	long int num1 = 1, num2 = 2, num3, i;

	printf("%ld, %ld, ", num1, num2);

	for (i = 2; i < 50; i++)
	{
		num3 = num1 + num2;

		printf("%ld, ", num3);

		num1 = num2;
		num2 = num3;
	}

	printf("\n");

	return (0);

}
