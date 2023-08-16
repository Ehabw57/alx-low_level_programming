#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - free all the dog allocated memory Yaaaaaay
 * @d: point to struct dog to be feed
*/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
	free(d->name);
	free(d->owner);
	free(d);
	}
}
