#include "lists.h"

/**
 * list_len - find the number of node
 * @h: linked list
 * Return: number of element
 */
size_t list_len(const list_t *h)
{
	int i;

	for (i = 0; h; i++)
		h = h->next;

	return (i);
}
