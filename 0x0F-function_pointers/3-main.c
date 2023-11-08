#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "3-calc.h"

/**
* main - program that perfroms simple operations
* @argc: number of arguments
* @argv: array of arguments
*
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
int num1, num2, result;
char operator;
int (*operation)(int, int);

if (argc != 4)
{
printf("Error\n");
exit(98);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
operation = get_op_func(argv[2]);

if (!operation)
{
printf("Error\n");
exit(99);
}

operator = *argv[2];

if ((operator == '/' || operator == '%') && argv[2] == 0)
{
printf("Error\n");
exit(100);
}
if(operator != '+' && operator != '-' && operator != '*' && operator != '/' && operator != '%')
{
return (0);
}
result = operation(num1, num2);

printf("%d\n", result);

return (0);
}

