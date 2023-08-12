#include <stdio.h>

/**
 * main - start point of the program
 * Return: always 0 its (success)
 * Reverse: Function to print reverse of
 * Str: the passed string
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
