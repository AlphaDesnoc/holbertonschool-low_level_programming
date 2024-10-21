#include "main.h"

/**
 * print_alphabet - Print alphabet lowercase
 *
 * Return: void
 */

void print_alphabet(void)
{
	char c = 97;

	for (; c < 123; c++)
	{
		_putchar(c);
	}
	_putchar(c);
}
