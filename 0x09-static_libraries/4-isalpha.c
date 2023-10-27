/**
 * _isalpha - checks for alphabetic character.
 * @c :  lowercase or uppercase
 * Return: 1 if f c is a letter, lowercase or uppercase or 0 otherwise
 */
#include <stdio.h>
#include "main.h"
#include <unistd.h>
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}

