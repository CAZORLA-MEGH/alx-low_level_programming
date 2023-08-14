/**
 * main - start point of the program
 *  prints  different combinations of three digits must be different.
 * Return: always 0 its (success)
 */

#include <stdio.h>
int main(void)
{
int x, z, k;
for (x = 0; x <= 9; x++)
{
for (z = x + 1; z <= 9; z++)
{
for (k = z + 1; k <= 9; k++)
{
putchar(x + '0');
putchar(z + '0');
putchar(k + '0');
if (x < 7)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
