#include "main.h"
/**
* _strspn - this functon take tow pointes to strings then compare both
* @s: the first ponter
* @accept: the sec one
* Return: always counter
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int length = 0;
char *ptr;

if (s == NULL || accept == NULL)
return (0);

while (*s != '\0')
{
for (ptr = accept; *ptr != '\0'; ptr++)
{
if (*ptr == *s)
break;
}

if (*ptr == '\0')
return (length);

length++;
s++;
}

return (length);
}
