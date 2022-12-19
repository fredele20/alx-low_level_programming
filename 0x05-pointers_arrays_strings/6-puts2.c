#include "main.h"

/**
 * puts2 - a function that prints every other character of a string
 *
 * @str: a pointer parameter of type char
 *
 * Return: always 0 (Success)
 */

void puts2(char *str)
{

	int len = 0, i = 0;

	while (str[len] != '\0')
		len++;

	len -= 1;

	for (; i <= len; i += 2)
		_putchar(str[i]);

	_putchar('\n');

}
