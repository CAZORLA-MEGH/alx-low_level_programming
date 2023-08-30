/**
 * _pow_recursion - that returns the value of x raised to the power of y
 * @x : value
 * @y : the power of value x
 * Return: -1 if y < 0 and return 1 if y == 0 else return _pow_recursion
 */

#include<stdio.h>
int _pow_recursion(int x, int y)
{
if (y == 0)
{
return (1);
}
else if (y < 0)
{
return (-1);
}
else
{
return (x * _pow_recursion(x, y - 1));
}

}
