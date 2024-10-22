#include <stdio.h>

/**
* print_to_98 - Entry point
*
* Return: Always 0 (Success)
*/

void print_to_98(int n)
{
	while (n <= 98)
	{
		_putchar('0' + n);
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		n++;
	}
}
