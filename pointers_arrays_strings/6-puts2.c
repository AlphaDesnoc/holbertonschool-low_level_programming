#include "main.h"

/**
* puts2 - Entry point
* @str: p
* Return: Always 0 (Success)
*/

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] % 2 == 0)
			_putchar('0' + str[i]);
	}
	_putchar('\n');
}
