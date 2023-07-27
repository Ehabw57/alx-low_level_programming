#include "main.h"
/**
 *  * puts_half - prints the second half of a string
 *   * @str: the string to print the second half of
 *    */
void puts_half(char *str)
{
	    int len = 0;
	        char *r = str;
		    int i;

		        /* Determine the length of the string */
		        while (*str != '\0') {
				        len++;
					        str++;
						    }

			    /* Output the second half of the string */
			    int n = (len - 1) / 2;
			        if (len % 2 == 0) {
					        for (i = n; i < len; i++) {
							            putchar(*(r + i));
								            }
						    } else {
							            for (i = n + 1; i < len; i++) {
									                putchar(*(r + i));
											        }
								        }
				    putchar('\n');
}
