#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - add a new node at the beginning of a list.
 * @h: address of first node of list.
 * @n: interger to insert
 * Return: address of new node
 */

listint_t *add_nodeint(listint_t **head, int n)
{
	listint_t *tp;

	tp = mallock(sizeof(listint_t));
	if (tp == NULL)
		return (NULL);

	tp->n = n;
	tp->next = *head;
	*head = tp;
	return (*head);
}
