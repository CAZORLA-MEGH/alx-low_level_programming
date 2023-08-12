#include <stdio.h>

/**
 * main - start point of the program
 * Return: always 0 its (success)
 * reverse: Function to print reverse of
 * the passed string
  */

void reverse(char *str)
{
if (*str)
{
reverse(str + 1);
printf("%c", *str);
}
}
int main()
{
char a[] = "\nabcdefghijklmnopqrstuvwxyz";
reverse(a);
return 0;
}
