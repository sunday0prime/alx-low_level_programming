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
	int i, res;

	res = -1;
	if (array && cmp)
	{

		if (size <= 0)
		{
			return (res);
		}
		for (i = 0; i < size; i++)
		{
			cmp(array[i]);
			if (cmp(array[i]) > 0)
			{
				res = i;
				break;
			}
			if ((cmp(array[i]) == (-1)))
			{
				return (res);
			}
		}

	}
	return (res);
}
