#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c = 0;

	while (c < 10)
	{
		printf("%d", c);
		c++;
	}
	putchar(10);

	return (0);
}
