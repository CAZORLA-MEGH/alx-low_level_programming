/**
 * calculate_sqrt - is a recursive helper function that calculates the square n
 * _sqrt_recursion - returns the natural square root of a number.
 * @n : an integer for which you want to find the natural square.
 * @i: used to keep track of thecurrent value being tested as a possible squar
 * Return: square n.
 */
#include<stdio.h>
#include"main.h"

int calculate_sqrt(int n, int i)
{
if (i * i == n)
{
return (i);
}
if (i * i > n)
{
return (-1);
}
return (calculate_sqrt(n, i + 1));
}
int _sqrt_recursion(int n)
{
{
if (n < 0)
return (-1);
}
return (calculate_sqrt(n, 0));
}
