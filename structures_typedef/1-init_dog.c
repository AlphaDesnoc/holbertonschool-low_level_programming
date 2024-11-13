#include "dog.h"

/**
* init_dog - Entry point
* @d: ptr
* @name: ptr
* @age: float
* @owner: ptr
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d.name = name;
		d.age = age;
		d.owner = owner;
	}
}
