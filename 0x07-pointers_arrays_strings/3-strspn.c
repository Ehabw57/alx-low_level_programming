#include <main.h>
/**
 * _strspn - this functon take tow pointes to strings then compare both
 * @s: the first ponter 
 * @accept: the sec one
 * Return: always counter
*/
unsigned int _strspn(char *s, char *accept) 
{
int counter = 0;
char *a;

while (*s != 0)
{

for (a = accept; *a != '\0'; a++)
{
if (*a == *s )
{ 
counter++;
break;
}

}
s++;
}
return (counter);
}
