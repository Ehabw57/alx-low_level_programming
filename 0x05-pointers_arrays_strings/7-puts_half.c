#include "main.h"
/**
 *  * puts_half - prints the second half of a string
 *   * @str: the string to print the second half of
 *    */
void puts_half(char *str)
{
	    int len = 0;
	        char *r = str;
		    int n;

		        /* Determine the length of the string */
		        while (*str != '\0') {
				        len++;
					        str++;
						    }

			    /* Output the second half of the string */
			    n = (len - 1) / 2;
			        if (len % 2 == 0) {
					        for (int i = n; i < len; i++) {
							            putchar(*(r + i));
								            }
						    } else {
							            for (int i = n + 1; i < len; i++) {
									                putchar(*(r + i));
											        }
								        }
				    putchar('\n');
}
