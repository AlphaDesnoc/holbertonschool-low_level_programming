#include "main.h"

/**
* puts2 - Entry point
* @str: p
* Return: Always 0 (Success)
*/

void puts2(char *str)
{
	int i;
	int j = 0;

	while (str[j] != '\0')
		j++;

	for (i = 0; i < j; i += 2)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
