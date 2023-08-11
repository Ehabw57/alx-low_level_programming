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
    unsigned int len1, len2;
   unsigned  int i, j;
     char *ptr;
 if (s1 == NULL)
 {
     s1 = "";
 }
  if (s2 == NULL)
 {
     s2 = "";
 }
     len1 = _strlen(s1);
     len2 = _strlen(s2);
if (len2 <= n)
{
    n = len2;
}
ptr = malloc(sizeof(char) * (len1 + n + 1));
if (ptr == NULL)
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
