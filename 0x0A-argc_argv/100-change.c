/**
* main - The primary function in the C program.
* @argc: the number of command-line arguments.
* @argv: array of strings.
* Return: 0 on success, 1 if have an char.
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(int argc, char *argv[])
{
int div, num, remain, sum = 0;
if (argc != 2)
{
printf("Error\n");
return (1);
}
num = atoi(argv[1]);
if (num < 0)
{
printf("0\n");
return (0);
}
div = num / 25;
remain = num % 25;
sum += div;

div = remain  / 10;
remain = remain % 10;
sum = sum + div;

div = remain  / 5;
remain = remain % 5;
sum = sum + div;

div = remain  / 2;
remain = remain % 2;
sum = sum + div;

div = remain  / 1;
remain = remain % 1;
sum = sum + div;


printf("%d\n", sum);
return (0);
}

