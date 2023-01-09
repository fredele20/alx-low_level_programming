#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into main
 * @argv: The character to print
 * @argc: The character to print
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc == 1)
		printf("%d\n", argc - 1);
	else
	{
		for (i = 0; *argv; i++, argv++)
			;

		printf("%d\n", i - 1);
	}

	return (0);
}
