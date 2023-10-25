/**
 * _print_rev_recursion - function that prints a string in reverse.
 * @s :  variable stores the string.
 */
#include<stdio.h>
#include"main.h"
void _print_rev_recursion(char *s)
{
if (*s == '\0')
return;
_print_rev_recursion(s + 1);
_putchar(*s);
}
