#include "main.h"

/**
 * print_alphabet - Print alphabet lowercase
 *
 * Return: no return
 */

void print_alphabet(void)
{
	char c = 97;

	while (c < 123)
	{
		_putchar(c);
		c++;
	}
	_putchar(10);
}
