/**
 * main - start point of the program
 * Description :
 * Return: always 0 its (success)
 */
#include <stdio.h>
#include "main.h"
#include <unistd.h>

int print_sign(int n)
{
char dev = '/';
if (n > 0)
{
_putchar('+');
return (1);
}
if (n == 0)
{
_putchar('0');
return ( 0);
}
if (n < 0)
{
_putchar('+');
return (1);
}
{
_putchar('-');
}
return (dev);
}

