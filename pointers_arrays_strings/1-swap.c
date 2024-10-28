#include "main.h"

/**
* swap_int - Entry point
* @a: p
* @b: p
* Return: void
*/

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
