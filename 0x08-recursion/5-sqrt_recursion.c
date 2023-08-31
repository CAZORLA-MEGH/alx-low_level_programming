/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n : numm
 * Return:  -1 if not have a natural square  1 if have a natural square
 */

#include<stdio.h>
#include <math.h>
int _sqrt_recursion(int n)

{
if (n != n * n)
{
return (-1);
}
_sqrt_recursion((n + 1) * (n + 1));
return (1);
}
