#include <stdio.h>

/**
* main - Entry point
* @argc: size
* @argv: array
* Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		for (i = 1; i < argc; i++)
			printf("%s\n", argv[i]);
	}
	return (0);
}
