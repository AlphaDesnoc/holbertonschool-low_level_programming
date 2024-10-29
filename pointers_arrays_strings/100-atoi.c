#include "main.h"

/**
* _atoi - Entry point
* @s: string
* Return: int
*/

int _atoi(char *s)
{
	int i = 0;
	int result = 0;
	int neg = 0;
	int sign = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			neg += 1;
		}

		if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + s[i] - '0';
		}
		i++;
	}

	if (neg % 2 == 0)
	{
		sign = 1;
	}
	else
	{
		sign = -1;
	}

	return (result * sign);
}
