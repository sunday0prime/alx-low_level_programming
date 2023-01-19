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
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
