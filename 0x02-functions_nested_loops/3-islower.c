/**
 * _islower -  checks for lowercase character.
 * Return:  1 if c >= a && c <= z.
 * Return:  0 if otherwise.
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

