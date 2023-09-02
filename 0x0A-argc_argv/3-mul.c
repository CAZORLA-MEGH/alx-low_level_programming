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
#include <stdlib.h>
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
x = atoi(argv[1]);
y = atoi(argv[2]);
multipl = x  * y;
printf("%d\n", multipl);
}
return (0);
}
