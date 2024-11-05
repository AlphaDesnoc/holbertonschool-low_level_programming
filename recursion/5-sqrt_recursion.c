#include "main.h"

/**
 * _sqrt - Entry point
 * @res: int
 * @mul: int
 * Return: sqrt
 */
int _sqrt(int res, int mul)
{
	if (mul * mul == res)
		return (mul);
	else if (mul * mul > res)
		return (-1);
	else
		return (_sqrt(res, mul + 1));
}

/**
* _sqrt_recursion - Entry point
* @n: int
* Return: Always 0 (Success)
*/
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
