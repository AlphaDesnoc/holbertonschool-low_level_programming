#include "main.h"

/**
* rev_string - Entry point
* @s: p
* Return: void
*/

void rev_string(char *s)
{
	int len = _strlen(s);

	while (len != 0)
	{
		_putchar(s[len]);
		len--;
	}
}
