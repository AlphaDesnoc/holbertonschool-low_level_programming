#include "lists.h"

/**
 * free_list - frees a list
 * @head: the beginning of the list
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;
	free_list(head->next);
	free(head->str);
	free(head);
}
