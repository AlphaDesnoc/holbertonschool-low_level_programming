#include <stddef.h>
#include "function_pointers.h"


/**
 * print_name - function
 * @name: ptr
 * @f: func ptr
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
