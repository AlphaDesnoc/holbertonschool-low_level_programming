#include "main.h"

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print_alphabet - Print alphabet lowercase
 *
 * Return: no return
 */

void print_alphabet(void)
{
	char c = 97;

	while (c < 123)
	{
		_putchar(c);
		c++;
	}
	_putchar(10);
}
