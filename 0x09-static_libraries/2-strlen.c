#include "main.h"

/**
 * _strlen - counts the characters in a string
 *
 * @s: pointer char parameter
 *
 * Return: always 0 (Success)
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
