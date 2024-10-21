#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c = 97;

	while (c < 123)
	{
		putchar(c);
	}

	c = 65;
	while (c < 91)
	{
		putchar(c);
	}
	putchar(36);

	return (0);
}
