/**
 * puts2 -  prints every other character of a string
 * @length - strlen the str
 * @i - integer loop
 * @str: char string
 */



#include<stdio.h>
#include<string.h>
#include"main.h"

void puts2(char *str)
{
int length = strlen(str);

int i;
for (i = 0; i < length; i += 2)
{
printf("%c", str[i]);
}
putchar('\n');
}
