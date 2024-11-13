#include "main.h"
#include <stdio.h>

/**
* print_dog - Entry point
* @d: ptr
*/

void print_dog(struct dog *d)
{
	if (!d)
		return;
	if (!d->name)
		d->name = "(nil)";
	if (!d->owner)
		d->owner = "(nil)";

	printf("Name: %s", d->name);
	printf("Age: %f", d->age);
	printf("Owner: %s", d->owner);
}
