#include "main.h"

/**
 * _strstr - Entry point
 * @haystack: ptr
 * @needle: ptr
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	if (!*needle)
		return (haystack);

	while (*haystack)
	{
		h = haystack;
		n = needle;

		while (*h && *n && *h == *n)
		{
			h++;
			n++;
		}

		if (!*n)
			return (haystack);

		haystack++;
	}

	return (0);
}

