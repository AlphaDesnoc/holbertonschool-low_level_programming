#include "main.h"

/**
* print_line - Entry point
* 
* Return: Always 0 (Success)
*/

void print_line(int n)
{

	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}

	else
	{
		while (i < n)
		{
			_putchar(95);
			i++;
		}
	}
}
