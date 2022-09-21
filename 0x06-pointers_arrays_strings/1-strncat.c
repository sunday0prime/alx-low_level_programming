#include "main.h"

/**
 * _srncpy - copies at most an inputed number
 * of bytes froms tring src into dest.
 * @src: the source string
 * @dest: the buffer stroing the string copy.
 * @n: the maximum number of bytes to copy
 * Return: a pointer to the result
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (src[i++])
		j++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = j; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

