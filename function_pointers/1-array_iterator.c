#include"function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - exec a function.MLP
 * @array: pointer to array.
 * @size: size of array.
 * @action: pointer to a function taking an int pointer as parameter.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
