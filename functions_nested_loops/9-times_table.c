#include "main.h"

/**
* times_table - Entry point
*
* Return: void
*/

void times_table(void)
{
	char i;
	char j;
	char k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			k = i * j;

			_putchar(k);
			_putchar(44);
			_putchar(32);
		}
	}	
}
