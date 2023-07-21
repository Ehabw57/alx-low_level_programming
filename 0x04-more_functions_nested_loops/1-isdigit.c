#include "main.h"

/**
* _isdigit - checkes if c is a digit or somthing else
* @c: the variable to check
* Return: (1) if c id upper (0) id else
*/
int _isdigit(int c);
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
