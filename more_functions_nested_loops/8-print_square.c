#include "main.h"

/**
* print_square - Entry point
* @size: p
* Return: void
*/

void print_square(int size)
{

	int row;
	int column;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (column = 0; column < size; column++)
	{
		for (row = 0; row < size; row++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

}
