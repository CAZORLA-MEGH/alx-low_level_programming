/**
* _puts_recursion -  is a recursive function that prints a string character,
*  @s: which is a pointer to the beginning of the string to be printed.
*
*/


#include <stdio.h>
#include "main.h"
#include "_putchar.c"
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
_puts_recursion(s + 1);

}


