/**
 * _strlen_recursion - returns the length of a string.
 * @s : string
 * Return: return  0 if *s == \0 return length string s
 */

#include<stdio.h>

int _strlen_recursion(char *s)
{

if (*s == '\0')
{
return (0);
}
else
{
return (1 + _strlen_recursion(s + 1));
}
}
