#include "main.h"
#include <stdlib.h>

/**
 * _strlen - findes the lenth of the string
 * @s: the string to find its lenth
 * Return: always c
 **/
int _strlen(char *s)
{
        int c = 0;

        while (*s > '\0')
        {
                s++;
                c++;
        }

        return (c);
}

/**
 * *_strcpy - this function copy the first
 * string to the other one
 * @dest: the one to copy text for
 * @src: the one to copy text from
 **/
char *_strcpy(char *dest, char *src)
{
        int c;

        for (c = 0; src[c] != '\0'; c++)
        {
                dest[c] = src[c];
        }
        dest[c] = '\0';

        return (dest);
}

char *argstostr(int ac, char **av)
{
    int i, j;
    int len = 0;
    char *ptr;

    if (ac == 0 || av == NULL)
    {
        return (NULL);
    }

    for (i = 0; i < ac; i++)
    {
    len += _strlen(av[i]);
    }

    len += ac + i + 1;
    ptr = malloc(sizeof(char) * len);
    
    if (ptr == NULL)
    {
        return (NULL);
    }
    
    for (i = 0, j = 0; i < ac ; i++)
    {
	  _strcpy(ptr + j, av[i]);
	  j += _strlen(av[i]);
	  ptr[j] = '\n';
	  j++;
    }
    
    return (ptr);
}
