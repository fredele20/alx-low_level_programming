#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: always 0 (Success)
 *
 */

int main(void)
{

	int d;
	char alph;

	for (d = '0'; d <= '9'; d++)
		putchar(d);
	for (alph = 'a'; alph <= 'f'; alph++)
		putchar(alph);
	putchar('\n');

	return (0);

}
