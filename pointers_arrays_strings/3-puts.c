#include "main.h"

/**
* _puts - Entry point
* @str: p
* Return: void
*/

void _puts(char *str)
{
	write(1, *str, _strlen(str));
}
