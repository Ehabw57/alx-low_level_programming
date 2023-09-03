#include "main.h"
/**
 * get_endianness - detect wheath  your procceor stores with Le or Be
 * Return: 0 if it is Bid endiannes or 1 if its Little endiannes
*/
int get_endianness(void)
{
	int j = 1;
	char *ptr = (char *) &j;

	if (*ptr == 1)
		return (1);
	else
		return (0);
}
