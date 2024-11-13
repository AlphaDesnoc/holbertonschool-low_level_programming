#include "main.h"
#include <stdio.h>

/**
* print_dog - Entry point
* @d: ptr
*/

void print_dog(struct dog *d)
{
	printf("Name: %d\nAge: %d\nOwner: %d", d.name, d.age, d.owner);
}
