/**
 * print_sign - print the sign of a number.
 * @n : number
 * Return: always 0 its (success)
 */
#include <stdio.h>
#include "main.h"
#include <unistd.h>

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}

if (n == 0)
{
_putchar('0');
return (0);
}
if (n < 0)
{
_putchar('-');
return (1);
}
if (n == -1)
{
_putchar('-');
}
_putchar('/');
return (0);
}
