#include "main.h"

/**
 * strcat - Concateneates the string pointed to by @src
 * @dest: pointer to the string to be concatenated upon
 * @src: the source string to be appended to @dest
 * Return: @dest
 */

char * _strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i++])
		j++;

	for (i = 0; src[i]; i++)
		dest[j++] = src[i];

	return (dest);
}

