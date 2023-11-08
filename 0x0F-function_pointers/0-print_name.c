/**
 * print_name - prints a name
 * @name: name to print
 * @f: pointer to the printing function
 */

#include <stdio.h>
#include <string.h>
#include "main.h"

void print_name(char *name, void (*f)(char *))
{
if (name && f)

f(name);
}

