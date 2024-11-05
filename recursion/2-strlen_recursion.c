#include "main.h"

/**
* _strlen_recursion - Entry point
* @s: ptr
* Return: Always 0 (Success)
*/

int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
