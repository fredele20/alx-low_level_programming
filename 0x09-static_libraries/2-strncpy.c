#include "main.h"

/**
 * _strncpy - a function that copys the strings.
 * @dest: an input string
 * @src: an input string
 * @n: an input integer
 * Return: A pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{

	int i;

	for (i = 0; src[i] != '\0'; i++) {
		if (i < n)
			dest[i] = src[i];
		while (i < n)
			dest[i++] = '\0';
	}

	return (dest);
}
