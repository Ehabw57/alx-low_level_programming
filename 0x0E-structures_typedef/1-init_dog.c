#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - it initalize the var my_dog with valus
 * @d: apointer to struct dog
 * @name: the value name
 * @age: the value age
 * @owner: the value owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
