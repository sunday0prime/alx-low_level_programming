#include "main.h"

/**
 * find_sqrt - finds the natural square root of an input
 * @i: the number to find the square root of
 * @j: the root to be tested.
 *
 * Return: if the number has a natural square root - the square root.
 * if the number does not have a natural square root - -1;
 */

int find_sqrt(int i, int j)
{
	if ((j * j) == i)
		return (j);
	else if ((j * j) > i)
		return (-1);
	return (find_sqrt(i, j + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: int
 * Return: natural square root
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (find_sqrt(n, 1));
}
