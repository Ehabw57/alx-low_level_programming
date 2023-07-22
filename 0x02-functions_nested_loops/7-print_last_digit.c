#include "main.h"

/** print_last_digit - is a function that prints the last digit og  variable f
 * @f: the variable to print its last digit
 */
int print_last_digit(int f)
{
	int s = f % 10;
	
	if (f < 0)
	{
		f= f * -1;
	}
	_putchar(s + '0') ;	
		
		return (s);
}
