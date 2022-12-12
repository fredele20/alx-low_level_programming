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

	int i, j, k, l;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = i; j <= '8'; j++)
		{
			if (i == '9' && j == '8')
				continue;

			for (k = i; k <= '9'; k++)
			{
				for (l = k + 1; l <= '9'; l++)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);

					if (k == '9' && l == '9')
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);

}
