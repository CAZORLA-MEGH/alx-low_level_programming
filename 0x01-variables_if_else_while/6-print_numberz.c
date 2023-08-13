#include <stdio.h>
/**
 * main - start point of the program
 * Return: always 0 its (success)
 */
int main(void)
{
int x = 0;
do {
printf("%d", x);
x++;
}
while(x <= 9);
putchar('\n');
return (0);
}
