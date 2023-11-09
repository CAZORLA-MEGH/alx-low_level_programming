/**
  *sum_them_all - returns the sum of all its parameters.
  *@n: number of arguments to be summed.
  *
  *Return: sum or zero
  */

#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

int sum_them_all(const unsigned int n, ...)
{
va_list argPtr;
unsigned int i, sum = 0;
if (n == 0)
return (0);


va_start(argPtr, n);

for (i = 0; i < n; i++)
sum += va_arg(argPtr, int);

va_end(argPtr);
return (sum);
}
