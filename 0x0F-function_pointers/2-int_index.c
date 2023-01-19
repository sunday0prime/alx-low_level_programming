#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - a function that returns the index of first number
 * @array: arrary of numbers
 * @size: size of array
 * @cmp: function to compare numbers
 *
 * Return: -1 if nothing is found, 0 and above the index of numb
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}
