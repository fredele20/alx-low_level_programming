#include "main.h"

/**
 * rev_string - this function reverses a string
 *
 * @s: a pointer parameter of type char
 *
 * Return: always 0 (Success)
 */

void rev_string(char *s)
{

	int len = 0, i = 0;
	char aux;

	while (s[len] != '\0')
		len++;

	while (i < len--)
	{
		aux = s[i];
		s[i++] = s[len];
		s[len] = aux;
	}

}
