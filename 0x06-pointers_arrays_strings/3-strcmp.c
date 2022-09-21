#include "main.h"

/**
 * _strcmp - compares two strings pointers
 * @s1: a pointer to s1
 * @s2: a pointer to s2
 * Return: if (s1 < s2) negative value
 * 	   if (s1 == s2) 0
 * 	   if (s1 > s2) positive value
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}

