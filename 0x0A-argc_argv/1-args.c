/**
 *main -  prints the number of arguments passed into it.
 *@argc :size of the argv array
 *@argv :array of size argc
 *Return: always 0
 */

#include <stdio.h>

int main(int argc, char *argv[])
{
if (argv[argc] != argv[0])
printf("%i\n", argc);
return (0);
}
