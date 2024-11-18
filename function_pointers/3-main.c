#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Performs basic arithmetic operations.
 * @argc: Number of arguments.
 * @argv: Array of character pointers listing all the arguments.
 * Return: 0 on success, or exits with specific codes for errors.
 */
int main(int argc, char *argv[])
{
	int a, b, result;
	char *op;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	op = argv[2];
	b = atoi(argv[3]);

	op_func = get_op_func(op);

	if (op_func == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((op[0] == '/' || op[0] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = op_func(a, b);
	printf("%d\n", result);

	return (0);
}

