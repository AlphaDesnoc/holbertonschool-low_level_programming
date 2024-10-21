#include "main.h"

/**
* print_sign - Entry point
* @n: n is integer
* Return: 1 (greater than 0) or 0 (is zero) or -1 (less thanzero
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
