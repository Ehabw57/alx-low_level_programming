#include "str.h"
/**
 * zstrlen - conts how many args passed to the fun
 * @src: sours string
 * Return: always c
 */
int zstrlen(char *src)
{
    int i = 0;
    int c = 0;

    while (src[i] != '\0')
    {
        if (strchr("cifs", src[i]))
            c++;

        i++;
    }
    return (c);
}
