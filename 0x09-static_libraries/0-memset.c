#include "main.h"

/**
 * _memset - this function fills the memory with constant bytes
 * @s: location to fill
 * @b: to fill location with
 * @n: number of byte to fill
 * Return: returns pointer to the filled location
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
