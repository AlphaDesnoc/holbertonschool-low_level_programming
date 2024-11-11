#include "main.h"

/**
 * malloc_checked - Entry point
 * @b: int
 * Return: Always 0 (Success)
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	if (b == 0)
		exit(98);

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
