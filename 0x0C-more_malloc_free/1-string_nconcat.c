#include "main.h"
#include <stdlib.h>

int _strlen(char *s1)
{
    int len;
    for (len = 0; *s1 != '\0'; len++)
    {
        s1++;
    }
    return (len);
}

char *string_nconcat(char *s1, char *s2, unsigned int n)
 {
     int len1, len2;
     int i, j;
     char *ptr;
 if (*s1 == NULL) // if NULL is passed, treat it as an empty string
 {
     *s1 = "";
 }
  if (*s2 == NULL) // if NULL is passed, treat it as an empty string
 {
     *s2 = "";
 }
     len1 = _strlen(s1);
     len2 = _strlen(s2);
if (len2 <= n) // If n is greater or equal to the length of s2 then use the entire string s2
{
    n = len2;
}
ptr = malloc(sizeof(char) * (len1 + len2));
if (ptr == NULL) // If the function fails, it should return NULL
{
    return (NULL);
}
for (i = 0; i < len1; i++)
{
    ptr[i] = s1[i];
}
for (j = 0; j < n; j++)
{
    ptr[i + j] = s2[j];
}
ptr[i + j + 1] = '\0';

return (ptr);
free (ptr);
 }
