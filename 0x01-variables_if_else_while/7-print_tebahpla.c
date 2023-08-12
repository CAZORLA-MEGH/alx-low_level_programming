#include <stdio.h>

/**
 * main - start point of the program
 * reverse: C program to reverse a string using recursion
 * str: the passed string
 * Return: always 0 its (success)
  */

void reverse(char *str)
{
if (*str)
{
reverse(str + 1);
printf("%c", *str);
}
}
int main(void)
{
char a[] = "\nabcdefghijklmnopqrstuvwxyz";
reverse(a);
return (0);
}
