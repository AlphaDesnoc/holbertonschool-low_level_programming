#include "variadic_functions.h"

/**
 * sum_them_all - Entry point
 * @n: int
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int index = 0;
	int sum = 0;
	int num = 0;

	va_list args;

	va_start(args, n);

	if (n == 0)
	{
		va_end(args);
		return (0);
	}

	while (index < n)
	{
		num = va_arg(args, int);
		sum += num;
		index++;
	}

	va_end(args);

	return (sum);

}
