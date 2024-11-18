#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"


/**
 * array_iterator - function
 * @array: ptr
 * @size: size_t
 * @action: func ptr
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL, || size == 0)
		return;

	i = 0;

	while (i < size)
	{
		(*action)(array[i]);
		i++;
	}
}
