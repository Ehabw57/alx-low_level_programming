#include <stdio.h>
/**
 * print_text - a functon that excutes before he main function
 */

void __attribute__((constructor)) print_text(void)
{
	char *s = "You're beat! and yet, you must allow,";
	char *f = "I bore my house upon my back!";

	printf("%s\n%s\n", s, f);
}
