#include "main.h"

/**
* print_rev - Entry point
* @s: p
* Return: void
*/

void print_rev(char *s)
{
	int len = 0;

	while (s[len])
		len++;

	while (len)
		_putchar(s[--len]);

	_putchar('\n');
}
