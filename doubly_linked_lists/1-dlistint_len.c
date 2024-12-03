#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - lists the number of elements
 * @h: head
 * Return: number
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		node++;
		h = h->next;
	}
	return (node);
}
