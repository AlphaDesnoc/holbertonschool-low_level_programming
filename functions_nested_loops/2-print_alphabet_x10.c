#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char c;
	char i;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c < 123; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
