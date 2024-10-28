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
			
			for (j = 0; j < n; j++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
			i++;
		}
	}
}
