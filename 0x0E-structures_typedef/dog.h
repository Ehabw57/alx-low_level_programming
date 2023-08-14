#ifndef DOG_H
#define DOG_H

/**
 * struct dog - is contating dog info
 * @name: is the name of the dog
 * @owner: is the name of the owner
 * @age: dogs age
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
#endif
