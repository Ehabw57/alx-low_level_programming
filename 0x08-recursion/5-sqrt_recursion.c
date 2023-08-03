
#include "main.h"
/**
 * sqrt_solve - this func is a helper func
 * @x: is the help int
 * @n: is the int to find it's sqrt
 * _sqrt_recursion - this function is the reciver for the value of y
 * Return: if x^2 = n return x
 * if x^2 > n return -1 (error no naturl sqrt found for n)
 * else return a recargion
**/
int sqrt_solve(int x, int n)
{
if (x * x == n)
{
return (x);
}
else if (x * x > n)
{
return (-1);
}
else
return (sqrt_solve((x + 1), n));
}
/**
 * _sqrt_recursion - this function is the reciver for the value of y
 * @n: is the int to find it's sqrt
 * Return: Always r
**/
int _sqrt_recursion(int n)
{
int r = sqrt_solve(1, n);

return (r);
}
