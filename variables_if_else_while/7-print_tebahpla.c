#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c = 122;

	while (c > 96)
	{
		putchar(c);
		c--;
	}
	
	putchar(10);

	return (0);
}
