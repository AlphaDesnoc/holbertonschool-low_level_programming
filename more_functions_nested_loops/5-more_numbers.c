#include "main.h"

/**
* more_numbers - Entry point
*
* Return: void
*/

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			_putchar('0' + j%10);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
