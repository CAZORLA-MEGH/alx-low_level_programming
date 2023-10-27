/**
* main - The primary function in the C program.
* @argc: the number of command-line arguments.
* @argv: array of strings.
* @x- integer variable to store the first command-line argument as an integer.
* @y- integer variable to store the second command-line argument as an integer.
* @power- integer variable to calculate the power of x raised to y.
*
* Return: 0 on success, 1 if there are not exactly two command-line arguments.
*/
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
int  x, y, power = 1;

if (argc != 3)
{
putchar('E');
putchar('r');
putchar('r');
putchar('o');
putchar('r');
putchar('\n');
return (1);

}
else
{
x = atoi(argv[1]);
y = atoi(argv[2]);

power = x *y;

printf("%d", power);
}

putchar('\n');
return (0);
}


