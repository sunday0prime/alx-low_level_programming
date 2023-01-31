#include "lists.h"

/**
 * listint_len - determines the number of elements in a list
 * @h: pointer to head of list
 * Return: -1 if error else number of items in list
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *tp;
	unsigned int cnr = 0;

	tp = h;
	while (tp)
	{
		cnr++;
		tp = tp->next;
	}

	return (cnr);
}
