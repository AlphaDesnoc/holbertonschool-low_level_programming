#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	short int c = 0;

	while (c < 10)
	{
		putchar('0' + c);
		putchar(44);
		putcahr(32);
		c++;
	}
	putchar(10);

	return (0);
}
