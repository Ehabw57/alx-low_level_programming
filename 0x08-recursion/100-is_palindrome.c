#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * check - this func cheks fot equlivent pointers
 * @f: the stasted pointer
 * @l: the late pointer
 * Return: 1 if success 0 if fials
 */
int check(char *f, char *l)
{
	if (f >= l)
		return (1);

	if (*f == *l)
		return (check(f + 1, l - 1));

	return (0);
}
/**
 * is_palindrome - this func checks if s is a pointer to
 * a plaindeome text or not
 * @s: the pointer
 * Return: always rectgion of  func check
 */

int is_palindrome(char *s)
{
	int len;
	char *ptrl;
	char *ptrf;

	ptrf = s;
	ptrl = s;

	len = strlen(s);
	ptrl += len;
	return (check(ptrf, ptrl - 1));
}
