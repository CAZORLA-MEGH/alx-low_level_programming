#include "main.h"
int largest_number(int a, int b, int c)
{
int largest;

if (a > b && a > c)
{
largest = a;
}
if (a > b && b > c)
{
largest = b;
}
if (c > a && a >b)
{

largest = c;
}

return (largest);
}

