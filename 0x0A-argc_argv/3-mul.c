/**
 *main -  multiplies two numbers.
 *@argc :size of the argv array
 *@argv :array of size argc
 *@x - num argv[1]
 *@y - num argv[2]
 *@multipl - multiplies x * y
 *Return: always 0
 */
#include <stdio.h>

int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("Error\n");
return (1);
}
else
{
int x, y, multipl;
x = argv[1][0] - '0';
y = argv[2][0] - '0';
multipl = x  *y;
printf("%d\n", multipl);
}
return (0);
}
