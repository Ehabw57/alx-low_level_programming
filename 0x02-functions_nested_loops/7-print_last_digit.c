#include "main.h"

/** print_last_digit - is a function that prints the last digit og  variable f
 * @f: the variable to print its last digit
 */
int print_last_digit(int f)
{
	if (f < 0 || f > 0)
	{
	_putchar(f %10);
	}
	else
	{	
		_putchar(f);
	}
		return (0);
}
