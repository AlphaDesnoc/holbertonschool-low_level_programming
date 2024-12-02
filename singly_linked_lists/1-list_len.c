#include "lists.h"

/**
 * list_len - find the number of node
 * @h: linked list
 * Return: number of element
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}

	return (i);
}
