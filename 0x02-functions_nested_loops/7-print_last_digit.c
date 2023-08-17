/**
 * print_last_digit - prints the last digit of a number
 * @x : number
 * Return: always 0 its (success)
 */

#include <stdio.h>
#include "main.h"
int print_last_digit(int x)

{
int lastdigit = x % 10;
if (x < 0)
lastdigit = lastdigit * -1;
{
_putchar(lastdigit + '0');
}
return (lastdigit);

}

