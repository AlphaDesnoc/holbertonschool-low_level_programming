#include "main.h"
#include <stdio.h>
/**
* _puts - Entry point
* @str: p
* Return: void
*/

void _puts(char *str)
{
	int i;

	for (i = 0; i != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
