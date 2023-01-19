#include "function_pointers.h"
/**
 * array_iterator - a function that iterates over an array
 * @array: - the pointer to the array
 * @size: - the size of the array
 * @action: - a pointer to the callback function
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size, i++)
	{
		action(array[i]);
	}
}
