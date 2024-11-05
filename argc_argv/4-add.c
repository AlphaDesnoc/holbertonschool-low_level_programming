#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: size
 * @argv: array
 * Return: Always 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int result = 0;
	int i, j;

	for (i = 1; i < argc; i++)
	{
		char *s = argv[i];

		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[j] < '0' || s[j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(s);
	}

	printf("%d\n", result);
	return (0);
}

