#include "main.h"

/**
* print_diagonal - Entry point
* @n : p
* Return: void
*/

void print_diagonal(int n)
{
	int i = 0;
	int j = 0;

	if (i <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i < n)
		{
			while (j < n)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
}
