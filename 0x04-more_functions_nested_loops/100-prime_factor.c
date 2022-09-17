#include <stdio.h>

/**
 * main - prints the largest prime factor
 * of a number
 * Return: returns 0
 */

int main(void)
{
	long number = 612852475143;
	int ln;

	while (ln++ < number / 2)
	{
		if (number % ln == 0)
		{
			number /= 2;
			continue;
		}
		for (ln = 3; ln < number / 2; ln += 2)
		{
			if (number % ln == 0)
				number /= ln;
		}
	}
	printf("%ld\n", number);
	return (0);
}

