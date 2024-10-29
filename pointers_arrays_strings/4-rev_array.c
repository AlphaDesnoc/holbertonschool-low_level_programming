#include "main.h"

/**
* reverse_array - Entry point
* @a: p
* @n: int
* Return: void
*/

void reverse_array(int *a, int n)
{
	int i;
	int j;
	int temp;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[j];
		a[--j] = temp;
	}
}
