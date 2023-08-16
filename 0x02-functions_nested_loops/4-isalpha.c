/**
 * main - start point of the program
 *
 * Return: always 0 its (success)
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

