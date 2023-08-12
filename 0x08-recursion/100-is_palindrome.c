#include <stdlib.h>
#include <string.h>
#include "main.h"

int check(char *f, char *l)
{
	if (f >= l)
		return (1);

	if (*f == *l)
		return check(f + 1, l - 1);
	
	return (0);
}

int is_palindrome(char *s)
{
	int len;
	char *ptrl;
	char *ptrf;
	
	ptrf = s;
	ptrl = s;

	len = strlen(s);
	ptrl += len;
	 return check(ptrf, ptrl - 1);
}
