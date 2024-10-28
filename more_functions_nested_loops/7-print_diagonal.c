#include "main.h"

/**
* print_diagonal - Entry point
* @n : p
* Return: void
*/

void print_diagonal(int n)
{
	int length;
	int space;

	if (n > 0)
	{
		for (length = 0; length < n; length++)
		{
			for (space = 0; space < length; space++)
				_putchar(' ');

			_putchar('\\');

			if (length == (n - 1))
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
