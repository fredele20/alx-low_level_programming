#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: An input number
 *
 * Return: always 0 (Success)
 */

int print_sign(int n)
{

	int value;

	if (n > 0)
	{
		value = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		value = 0;
		_putchar('0');
	}
	else
	{
		value = -1;
		_putchar('-');
	}

	return (value);

}
