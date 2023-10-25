/**
* factorial- function calculates  factorial of n.
*  @n: is the input parameter for the factorial function.
* Return: Factorial n.
*/

#include <stdio.h>
#include "main.h"
int factorial(int n)
{
if (n == 1)
{
return (1);
}
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));

}


