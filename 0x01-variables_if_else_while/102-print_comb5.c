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
			putchar(i);
			putchar(j);

			if (i == '9' && j == '8')
				continue;
			putchar(' ');

			for (k = i; k <= '9'; k++)
			{
				for (l = i + 1; l <= '9'; l++)
				{
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
