/**
  *print_strings - prints strings followed by a new line.
  *@separator: string to be printed between strings.
  *@n: number of strings.
  */
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"


void print_strings(const char *separator, const unsigned int n, ...)

{
va_list argPtr;
unsigned int i;
char *st;
va_start(argPtr, n);
for (i = 0; i < n; i++)
{
st = va_arg(argPtr, char*);
if (st == NULL)
{
printf("(nil)");
}
else
{
printf("%s", st);
}
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
