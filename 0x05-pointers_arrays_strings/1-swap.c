#include "main.h"

/**
* swap - swaps the value of 2 variables
* @a: the first integer to be swapped
* @b: the second integer to be swapped
* Return: returns nothing
*/

void swap_int(int *a, int *b)
{
    int c = *b;
    *b = *a;
    *a = c;
}

