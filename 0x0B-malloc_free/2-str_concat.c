#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strlen - is afunction that caculates the lenth of a string
 * @s1: the steing to find its lenth
 * Return: always lenth
 **/
int _strlen(char *s1)
{
	int lenth;

	for (lenth = 0; *s1 != '\0'; lenth++)
	{
		s1++;
	}
	return (lenth);
}
/**
 * *str_concat - dublicate tow strings using malloc
 * @s1: first string to dub
 * @s2: sec string to dub
 * Return: usually ptr
 **/
char *str_concat(char *s1, char *s2)
{
	int size1, size2;
	int i, j;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	size1 = _strlen(s1);
	size2 = _strlen(s2);
	ptr = malloc(sizeof(char) * (size1 + size2 + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size1; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < size2; j++)
	{
		ptr[i + j] = s2[j];
	}
	return (ptr);
}
