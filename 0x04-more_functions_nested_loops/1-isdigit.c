/**
 * _isdigit -  checks for a digit (0 through 9).
 * @c: numeber
 * Return: c
*/
#include <stdio.h>
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
