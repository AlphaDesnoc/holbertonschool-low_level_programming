#ifndef DOG_H
#define DOG_H

/**
 * struct dog - typedef
 *
 * @name: ptr
 * @age: float
 * @owner: ptr
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} my_dog;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif

