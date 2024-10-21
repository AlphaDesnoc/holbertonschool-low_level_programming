#include <stdio.h>

/**
* jack_bauer - Entry point
* 
* Return: void
*/

void jack_bauer(void)
{
	char i;
	char j;

	i = 0;

	while (i < 24)
	{
		j = 0;
		
		while (j < 60)
		{
			_putchar('0' + (i / 10));
			_putchar('0' + (i % 10));
			_putchar(':');
			_putchar('0' + (j / 10));
			_putchar('0' + (j % 10));
			_putchar('\n');
			j++;
		}
		i++;
	}
}
