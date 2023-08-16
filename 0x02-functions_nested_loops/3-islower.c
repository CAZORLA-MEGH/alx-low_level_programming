/**
 * main - start point of the program
 * function print_alphabet -  prints the alphabet, in lowercase
 * Return: always 0 its (success)
 */

#include <stdio.h>
#include "main.h"
#include <unistd.h>
int _islower(int c)
{

if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}

