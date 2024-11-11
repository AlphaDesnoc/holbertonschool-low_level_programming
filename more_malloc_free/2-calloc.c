#include "main.h"

/**
 * _calloc - Entry point
 * @nmemb: int
 * @size: int
 * Return: Always 0 (Success)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned char *block;
	unsigned int total_size;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;
	if (total_size / nmemb != size)
		return (NULL);

	block = malloc(total_size);
	if (block == NULL)
		return (NULL);

	for (i = 0; i < total_size; i++)
		block[i] = 0;

	return ((void *)block);
}
