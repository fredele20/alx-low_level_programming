#include "main.h"

/**
 * print_prev - this function prints a string in a reverse order
 *
 * @s: a pointer parameter of type char
 *
 * Return: always 0 (Success)
 */

void print_prev(char *s)
{

	int i = 0;

	while (s[i] - 1 != '\0')
		i++;

	while (i)
		_putchar(s[--i]);

	_putchar('\n');

}
