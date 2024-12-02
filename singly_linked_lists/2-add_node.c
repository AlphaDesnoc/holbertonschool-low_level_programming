#include "lists.h"

/**
 * add_node - add new node to the list
 * @head: current place
 * @str: string to add to list
 * Return: pointer to pos
 */
list_t *add_node(list_t **head, const char *str)
{
	int len;
	char *content;
	list_t new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	content = strdup(str);
	if (content == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = content;
	new->len = len;
	new->next = *head;
	*head = new;

	return (new);
}
