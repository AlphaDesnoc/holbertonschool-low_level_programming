#include "main.h"

/**
* _isalpha - Entry point
*
* @c: c is integer
*
* Return: 1 (true) or 0 (false)
*/

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
