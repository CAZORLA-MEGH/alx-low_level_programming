/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: number
 * @z:number
*/
#include<stdio.h>
void print_diagonal(int n)
{
int z;
{
for (z = 0; z < n; z++)
{
putchar('\\');
if (n <= 0)
putchar('\n');
}
}
putchar('\n');
}
