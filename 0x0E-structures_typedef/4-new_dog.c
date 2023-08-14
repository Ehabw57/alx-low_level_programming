#include <stdlib.h>
#include "dog.h"

/**
 * *new_dog - a function that creates a new dog
 * @name: the vlaue name
 * @age: the value age
 * @owner: the value owner
 * Return: NULL if the func failed or ptr if success
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));

	if (ptr == NULL)
	return (NULL);

	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;

	return (ptr);
}
