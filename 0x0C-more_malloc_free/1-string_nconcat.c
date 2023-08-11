#include "main.h"
#include <stdlib.h>
#include <string.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
 {
    unsigned int len1, len2;
 
     char *ptr;
 if (s1 == NULL)
 {
     s1 = "";
 }
  if (s2 == NULL)
 {
     s2 = "";
 }
     len1 = strlen(s1);
     len2 = strlen(s2);
 if (n >= len2) 
 {
        n = len2;
    }
ptr = malloc(sizeof(char) * (len1 + n + 1));
 ptr = strncpy(ptr, s1, len1);
 ptr = strncpy(ptr + len1, s1, n);
ptr[n + len1] ='\0';
return (ptr);
 }
 