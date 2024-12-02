#include "lists.h"

/**
 * add_node_end - add node to the end of list
 * @head: current place
 * @str: str to add
 * Return: pointer to current pos
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *current;
	int len = 0;

	new = malloc(sizeof(list_t));
	if (new->str == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	while (str[len])
		len++;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = new;
	}
	return (new);
}
