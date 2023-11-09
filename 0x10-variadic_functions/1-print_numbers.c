/**
  *print_numbers - prints numbers followed by a new line.
  *@separator: string to be printed between numbers.
  *@n: number of integers passed to the function.
  *
  *Return: void.
  */
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list argPtr;
unsigned int i;
int x = 0;
va_start(argPtr, n);
for (i = 0; i < n; i++)
{
x = va_arg(argPtr, int);
printf("%d", x);
if (separator == NULL)
{
continue;
}
if (i == n - 1)
continue;
printf("%s", separator);
}
printf("\n");
va_end(argPtr);
}
