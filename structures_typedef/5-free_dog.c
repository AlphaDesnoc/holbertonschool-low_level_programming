#include "main.h"
#include <stdlib.h>

/**
* free_dog - Entry point
* @d: ptr
*/

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
