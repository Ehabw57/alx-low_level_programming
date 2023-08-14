#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * _strlen - finds the lenth of a string
 * @s: the pointer to string
 * Return: Always len
*/
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len + 1);
}
/**
 * _strcpy - copyes a src to dest
 * @dest: pointer to copy sting in
 * @src: the sours to copy string from
 * Return: Always dest
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * *new_dog - a function that creates a new dog
 * @name: the vlaue name
 * @age: the value age
 * @owner: the value owner
 * Return: NULL if the func failed or ptr if success
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr = malloc(sizeof(dog_t));

	if (ptr == NULL)
		return (NULL);

	ptr->name = malloc(sizeof(char) * _strlen(name));

	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr->owner = malloc(sizeof(char) * _strlen(owner));

	if (ptr->owner == NULL)
	{
		free(ptr->name);
		return (NULL);
	}

	_strcpy(ptr->owner, owner);
	_strcpy(ptr->name, name);

	ptr->age = age;

	return (ptr);
}
