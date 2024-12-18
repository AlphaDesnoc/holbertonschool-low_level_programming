#include "main.h"

/**
* _puts_recursion - Entry point
* @s: ptr
* Return: Always 0 (Success)
*/

void _puts_recursion(char *s)
{
	if (!*s)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
