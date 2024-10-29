#include "main.h"

/**
 * printnumber - print number with putchar
 * @n: int
 * Return; void
 */
void printnumber(int n)
{

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n == 0)
		_putchar('0');

	if (n / 10)
		printnumber(n / 10);

	_putchar(n % 10 + '0');
}

/**
* print_array - Entry point
* @a: p
* @n: int
* Return: void
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printnumber(a[i]);

		if (i != (n - 1))
		{
			_putchar(',');
			_putchar(' ');
		}
	}
}
