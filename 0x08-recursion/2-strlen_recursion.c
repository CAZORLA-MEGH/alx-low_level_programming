/*
*_strlen_recursion - function calculates the length of the string
*@s: which is a pointer to the beginning of the string.
*Return: lentgh of the string s
*/


#include <stdio.h>
#include <string.h>
#include "main.h"
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}

return (1 + _strlen_recursion(s + 1));
}


