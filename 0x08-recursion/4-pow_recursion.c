/**
* _pow_recursion - function calculates the value of x raised to the power of y.
*  @x: base number in the power calculation.
*  @y: exponent in the power calculation
*@resu - is an integer variable used to store the intermediate result of thepow
* Return: resu.
*/

#include <stdio.h>
#include "main.h"
int _pow_recursion(int x, int y)
{


if (y == 0)
return (1);


if (y < 0)
{
return (-1);
}


return (_pow_recursion(x, y - 1) * x);


}


