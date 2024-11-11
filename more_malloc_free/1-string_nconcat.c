#include "main.h"

/**
 * string_nconcat - Entry point
 * @s1: ptr
 * @s2: ptr
 * @n: int
 * Return: Always 0 (Success)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len1;
	unsigned int len2;
	unsigned int index;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = 0;
	while (s1[len1])
		len1++;

	len2 = 0;
	while (s2[len2] && len2 < n)
		len2++;

	concat = malloc(len1 + len2 + 1);
	if (concat == NULL)
		return (NULL);

	for (index = 0; index < len1; index++)
		concat[index] = s1[index];

	for (index = 0; index < len2; index++)
		concat[len1 + index] = s2[index];

	concat[len1 + len2] = '\0';

	return (concat);
}
