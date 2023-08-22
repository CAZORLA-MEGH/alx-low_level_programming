/**
 * puts2 -  prints half of a string, followed by a new line.
 * @length - strlen the str
 * @i - integer loop
 * @str: char string
 */



#include<stdio.h>
#include<string.h>
#include"main.h"

void puts_half(char *str)
{
int length = strlen(str);

int i;
for (i = 5; i < length; i++)
{
printf("%c", str[i]);
}
putchar('\n');
}
