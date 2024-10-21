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
		c++;
	}

	c = 65;
	while (c < 91)
	{
		putchar(c);
		c++;
	}
	c = 36;
	while (c > 9)
	{
		if (c == 36 || c == 10)
		{
			putchar(c);
		}
		c--;

	}

	return (0);
}
