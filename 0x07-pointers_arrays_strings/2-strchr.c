#include "main.h"
/**
 * *_strchr - is a function that search for a char in a strig
 * @s: the string
 * @c: the char to look for
 * Return: NULL if nothing is found or s if it is founf
*/

char *_strchr(char *s, char c)
{

while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
return (NULL);
}
