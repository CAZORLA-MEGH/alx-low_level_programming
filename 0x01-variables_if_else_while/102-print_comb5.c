/**
 * main - start point of the program
 * Return: always 0 its (success)
 */


#include <stdio.h>
int main(void)
{
int i, j, z, k;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
for (z = 0; z <= 9; z++)
{
for (k = 1; k <= 9; k++)
{
putchar(i + '0');
putchar(j + '0');
putchar(' ');
putchar(z + '0');
putchar(k + '0');
putchar(',');
{
putchar(' ');
putchar(',');
}
}
}
}
}
return (0);
}
