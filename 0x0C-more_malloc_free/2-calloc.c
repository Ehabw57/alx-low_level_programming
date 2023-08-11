#include <stdlib.h>
#include "main.h"

void *_calloc(unsigned int nmemb, unsigned int size)
 {
     int i = 0;
     void *ptr;
     char *ptr2;
     
     if (size == 0 || nmemb == 0)
     {
     return (NULL);
     }
     ptr = malloc(size * nmemb);
     if (ptr == NULL)
     {
         return (NULL);
     }
  ptr2  = (char*) ptr;
     while (i < size * nmemb)
     {
         ptr2[i] = '\0'; 
         i++;
     }
     return (ptr2);
 }
