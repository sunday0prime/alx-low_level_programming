#include "main.h"

/**
 * _memcpy - copies @n bytes from the memory area pointed to by
 * @src into that pointed to by @dest
 * @dest: a pointer to the memory area to copy @src into.
 * @src: the source buffer to copy characters from.
 * @n: the number of bytes to copy the @src
 *
 * Return: a pointer to the destination buffer @dest.
 */

void *_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int index;
	unsigned char *destination = dest
	const unsigned char *source = src;

	for (index = 0; index < n; index++)
		destination[index] = source[index];

	return (dest);
}
