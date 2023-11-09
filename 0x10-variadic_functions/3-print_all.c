/**
  *print_all - prints anything.
  *@format: list of all arguments passed to the function.
  */

#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "variadic_functions.h"

void print_all(const char * const format, ...)
{

int i = 0;
char *st, *seperator;
va_list argPtr;
va_start(argPtr, format);
seperator = "";

while (format[i] != '\0')
{
switch (format[i])
{
case 'c':
printf("%s%c", seperator, va_arg(argPtr, int));
break;
case 'i':
printf("%s%d", seperator, va_arg(argPtr, int));
break;
case 'f':
printf("%s%f", seperator, va_arg(argPtr, double));
break;
case 's':
st = va_arg(argPtr, char *);
if (st == NULL)
st = "(nil)";
printf("%s%s", seperator, st);
break;
default:
i++;
continue;
}
seperator = ", ";
i++;
}

printf("\n");
va_end(argPtr);
}
