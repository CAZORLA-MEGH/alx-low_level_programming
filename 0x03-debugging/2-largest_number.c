/**
 * largest_number - prints the largest of three integers.
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: larges
*/
#include<stdio.h>
#include "main.h"
int largest_number(int a, int b, int c)
{
int largest;

if (a >= b && a >= c)
{
largest = a;
}
else if (b >= a && b >= c)
{
largest = b;
}
else
{
largest = c;
}

return (largest);
}

