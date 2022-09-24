#include "main.h"

/**
 * _srncpy - copies at most an inputed number
 * of bytes froms tring src into dest.
 * @src: the source string
 * @dest: the buffer stroing the string copy.
 * @n: the maximum number of bytes to copy
 * Return: a pointer to the result
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i++])
		j++;

	for (i = 0; src[i] && i < n; i++)
		dest[j++] = src[i];

	return (dest);

}

