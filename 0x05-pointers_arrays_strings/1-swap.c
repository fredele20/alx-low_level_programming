#include "main.h"

/**
 * swap_int - this function swaps the value of two variables
 *
 * @m: parameter 1
 * @n: parameter 2
 *
 * Return: always 0 (Success)
 */

void swap_int(int *m, int *n)
{
	int temp;

	temp = *m;
	*m = *n;
	*n = temp;
}
