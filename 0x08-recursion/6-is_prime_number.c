#include "main.h"
/**
* primax - this is a help function that defines the prime num
* @n: the num to check
* @x: an incremental num
* Return: if x == n return x
* if n % x == 0 || n <= 1 return 0
* else return the end of the recursion
**/
int primax(int n, int x)
{
if (x == n)
{
return (1);
}
if (n % x == 0 || n <= 1)
{
return (0);
}
else
{
return (primax(n, x + 1));
}
}
/**
* is_prime_number - just a middle func that send the value back to main
* @n: the num to check
* Return: the result of primax
*/
int is_prime_number(int n)
{
int x = 2;

return (primax(n, x));
}
