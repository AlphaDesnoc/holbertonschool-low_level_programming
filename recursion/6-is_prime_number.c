#include "main.h"

/**
 * prime - Entry point
 * @res: int
 * @div: int
 * Return: int
 */
int prime(int res, int div)
{
	if (div * div > res)
		return (1);
	else if (res % div == 0)
		return (0);
	else
		return (prime(res, div + 1));
}

/**
* is_prime_number - Entry point
* @n: int
* Return: Always 0 (Success)
*/
int is_prime_number(int n)
{
	if (n <= 0)
		return (0);

	return (prime(n, 2));
}
