#include "main.h"

/**
 * _islower - check for lowercase characters
 *
 * @c: An input character
 *
 * Return: always 0 (Success)
 *
 */

int _islower(int c)
{

	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}

	return (lower);

}
