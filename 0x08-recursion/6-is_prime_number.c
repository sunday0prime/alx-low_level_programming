#include "main.h"

/**
 * is_divisible - checks if a number is divisible
 * @num: the number to be checked
 * @div: the divisor
 *
 * return: if the number is divisible - 0
 * if the number is not divisible - 1
 */

int is_divisible(int num, int div)
{
	int remainder;

	remainder = num % div;
	if (remainder && div < num)
		return (is_divisible(num, div + remainder));
	else if (remainder == 0 && div == num)
		return (0);
	return (1);
}

/**
 * is_prime_number - states if number is prime
 * @n: int
 * Return: int
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (is_divisible(n, 2));
}
