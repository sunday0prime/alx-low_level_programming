#include <stdio.h>
#include "main.h"

/**
* print_triangle - prints a triangle
* @size: size parameter of triangle
* Return: returns nothing
*/

void print_triangle(int size)
{
	int ln1, ln2;

	if (size > 0)
	{
		for (ln1 = 1; ln1 <= size; ln1++)
		{
			for ((ln2 = size - ln1); ln2 > 0; ln2--)
			{
				putchar(' ');
			}
			for (ln2 = 0; ln2 < ln1; ln2++)
			{
				putchar('#');
			}
			if (ln1 == size)
			{
				continue;
			}
			putchar('\n');
		}
	}
	putchar('\n');
}

