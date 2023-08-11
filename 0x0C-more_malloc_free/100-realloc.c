#include "main.h"
#include <stdlib.h> 

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *ptr2;
unsigned int i;

if (ptr == NULL) 
{
ptr = malloc(new_size);
return (ptr);
}

if (new_size == 0 && ptr != NULL) 
{
free(ptr);
return (NULL);
}

if (old_size == new_size) 
{
return (ptr);
}

if (new_size > old_size)
{

ptr2 = malloc(sizeof(char) * new_size);

for (i = 0; i < old_size; i++)
{
   ((char *)ptr2)[i] =  ((char *)ptr)[i];
}
free(ptr);
return(ptr2);
}
if (new_size < old_size)
{
    ptr2 = malloc(sizeof(char) * new_size);
for (i = 0; i < new_size; i++)
{
   ((char *)ptr2)[i] =  ((char *)ptr)[i];
}
free(ptr);
return(ptr2);
}
return (ptr);
}
