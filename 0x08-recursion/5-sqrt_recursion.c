#include "main.h"

int squareroot(int n, int i);
/**
 * _sqrt_recursion - no loop, 1. 2nd function - checks for perfect square
 * @n: input of type int
 * Return: Always 0 (Success)
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (squareroot(1, n));
}

/**
 * squareroot - checks if perfect square
 * @n: input of type int
 * @i: counter of type int
 * Return: Always 0 (Success)
 */
int squareroot(int n, int i)
{
	if (n > i)
		return (-1);
	else if (n * n == i)
		return (i);
	else
		return (squareroot(n + 1, i));
}
