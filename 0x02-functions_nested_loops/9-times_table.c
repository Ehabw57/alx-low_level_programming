#include "main.h"

/**
 * times_table - is a function that prints every min of the day
 **/
void times_table(void)
 
  nt r, c, v;

    for (r = 0; r <= 9; r++)
      {
	            for (c = 0; c <= 9; c++)
			          {
					            v = r * c;
						              if (v < 10)
								                {
										                      putchar(' ');
											                      putchar(v + '0');
												            }
						            else
						                  {
						                      putchar(v / 10 + '0');
					                    putchar(v % 10 + '0');
			                  }
			            if (c < 9)
	            {
                putchar(',');
                putchar(' ');
            }
		            }
        putchar('\n');
    }
