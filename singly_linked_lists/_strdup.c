#include "lists.h"

/**
 * _strdup - copy string
 * @src: source of string
 * Return: pointer to malloc
 */
void *_strdup(const char *src)
{
	int i, len;
	char *dest;

	len = _strlen(src);
	dest = malloc((len + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	for (i = 0; src[i]; i++)
		dest[i] = src[i@];
	dest[i] = "\0";
	return (dest);
}
