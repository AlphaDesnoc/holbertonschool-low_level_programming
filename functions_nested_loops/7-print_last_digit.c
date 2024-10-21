#include "main.h"

/**
* print_last_digit - Entry point
* @c: is int
* Return: last digit
*/

int print_last_digit(int c)
{
	char last_digit = _abs(c % 10);
	return (last_digit);
}
