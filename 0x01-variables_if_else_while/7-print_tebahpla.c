#include <stdio.h>

/**
 * main - start point of the program
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
int main()
{
char a[] = "\nabcdfghijklmnoprstuvwxyz";
reverse(a);
return 0;
}
