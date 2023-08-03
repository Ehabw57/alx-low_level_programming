#include "main.h"
/**
* _pow_recursion - this a function that caculate the power of a giver number
* @x: the number
* @y: the amount of power to caculate
* Return: if y = 1 return 1
* if y < 0 return -1
* if y = 0 return r
**/
int _pow_recursion(int x, int y)
{
int r;
if (y == 1)
{
r = x * 1;
return (r);
}
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
r = x * _pow_recursion(x, (y - 1));

return (r);
}
