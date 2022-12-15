#include <stdio.h>

/**
 * main - a program that finds and prints the first 98 fibonacci numbers
 *
 * the fibonacci number of this program starts from 1, 2.
 *
 * Return: always 0 (Success)
 */

int main(void)
{

	long int num1 = 1, num2 = 2, i, num3;

	printf("%lu, %lu, ", num1, num2);

	for (i = 2; i < 98; i++)
	{
		num3 = num1 + num2;
		printf("%lu", num3);

		if (i != 97)
			printf(", ");
		num1 = num2;
		num2 = num3;
	}

	printf("\n");

	return (0);

}
