/**
* main - The primary function in the C program.
* @argc: the number of command-line arguments.
* @argv: array of strings.
* @i- variable is used as a loop counter.
* @j- variable is used as a loop counter.
* @sum-  sum of all the valid integer values.
* @num-  store the integer value after converting.
* Return: 0 on success, 1 if have an char.
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(int argc, char *argv[])
{
int i, j, num, sum = 0;
if (argc == 0)
{
putchar('0');
putchar('\n');
}
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
num = atoi(argv[i]);
sum += num;
}
printf("%d\n", sum);
return (0);
}

