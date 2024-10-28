#include "main.h"

/**
* rev_string - Entry point
* @s: p
* Return: void
*/

void rev_string(char *s)
{
	int len = 0;
	int a = 0;
	int b = 0;
	int temp = 0;

	while (s[len] != '\0')
		len++;


	for (a = 0, b = len - 1; a < (len / 2); a++, b--)
	{
		temp = s[a];
		s[a] = s[b];
		s[b] = temp;
	}

}
