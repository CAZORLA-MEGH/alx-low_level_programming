/**
 * print_rev - prints a string, in reverse
 * @s : string
 * @lenght - srtlen s
 * @i - number
*/




#include <stdio.h>
#include<string.h>
void print_rev(char *s)
{
int length = strlen(s);
int i;
for (i = length - 1; i >= 0; i--)
{
putchar(s[i]);
}
putchar('\n');
}
