#include "main.h"
/**
* puts2 - is a function that puts a half of the line
* @str: the line to reverse
**/
void puts_half(char *str)
{
	    int len = 0;
	        char *r = str;

		  
		    while (*str != '\0') {
			            len++;
				            str++;
					        }


		        int n = (len - 1) / 2;
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
