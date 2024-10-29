#include "main.h"

/**
* print_array - Entry point
* @a: p
* @n: int
* Return: void
*/

void print_array(int *a, int n)
{
	char i;

	for (i = 0; i < n; i++)
	{
		_putchar(a[i]);

		if (i != n)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
}
