#include "main.h"

/**
 * _puts - prints out a string followed by a new line
 *
 * @str: parameter of type char
 *
 * Return: always 0 (Success)
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);

		i++;
	}

	_putchar('\n');
}
