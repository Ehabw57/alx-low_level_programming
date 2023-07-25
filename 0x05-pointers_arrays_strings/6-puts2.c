#include "main.h"
/**
 *  * puts2 - is a function that puts a half of the line
 *   * @str: the line to reverse
 *    **/
void puts2(char *str)
{
	  char *r = str;
	    while (*str != '\0')
		        str++;
	      while (r < str)
		        {
				    
				    putchar(*r);
				        r++;
					    r++;
					      }
	      putchar('\n');
}
