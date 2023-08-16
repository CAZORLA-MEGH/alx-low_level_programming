/**
 * print_last_digit - prints the last digit of a number
 * 'x' - number
 * Return: always 0 its (success)
 */

#include <stdio.h>
#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
int print_last_digit(int x)

{
int digit;
srand(time(0));
x = rand() - RAND_MAX / 2;
/* your code goes there */
digit = (x % 10);

return (digit);

}

