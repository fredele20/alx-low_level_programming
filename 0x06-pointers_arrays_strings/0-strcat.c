#include "main.h"

/**
 * _strcat - is a function that concatenates two different strings
 *
 * @dest: parameter of type char
 * @src: parameter of type char
 *
 * Return: always 0 (Success)
 *
 */

char *_strcat(char *dest, char *src)
{

	char *concat = _putchar(&dest, ' ', &src);

	return (concat);

}
