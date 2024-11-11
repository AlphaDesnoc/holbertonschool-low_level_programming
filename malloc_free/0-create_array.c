#include "main.h"
#include <stdlib.h>

/**
 * create_array - Entry point
 * @size: size
 * @c: char
 * Return: Always array
 */
char *create_array(unsigned int size, char c)
{
	char *array;

	register unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
