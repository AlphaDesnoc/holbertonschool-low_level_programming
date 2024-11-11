#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Entry point
 * @s1: char ptr
 * @s2: chat ptr
 * Return: Always 0 (Success)
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int len1;
	int len2;
	int index;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = 0;
	while (s1[len1])
		len1++;

	len2 = 0;
	while (s2[len2])
		len2++;

	concat_str = malloc(len1 + len2 + 1);
	if (concat_str == NULL)
		return (NULL);

	for (index = 0; index < len1; index++)
		concat_str[index] = s1[index];

	for (index = 0; index < len2; index++)
		concat_str[len1 + index] = s2[index];

	concat_str[len1 + len2] = '\0';

	return (concat_str);
}
