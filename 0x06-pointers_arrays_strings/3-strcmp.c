#include "main.h"

/**
 * *_strncpy - a function that copyes tow strings
 * @dest: the one to copy text for
 * @src: the one to copy text from
 * @n: the index to copy
 * Return: always dest
 **/
int my_strcmp(const char *s1, const char *s2)
{
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }

    if (*s1 == *s2) {
        return 0;
    }
    else if (*s1 < *s2) {
        return -15;
    }
    else {
        return 15;
    }
}
