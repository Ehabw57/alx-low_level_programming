#include "main.h"
/**
 * rev_string - is a func that reverse a sample string
 * @s: the strig to reverse
 **/

void rev_string(char *s)
{
	char *sr = s;
	char *ed = s;
	char t;

	while (*ed != '\0')
	{
		ed++;
	}
	ed--;
	while (sr < ed)
	{
		t = *sr;
		*sr = *ed;
		*ed = t;
		sr++;
		ed--;
	}
}
