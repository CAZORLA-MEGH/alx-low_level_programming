/**
 * print_line - draws a straight line in the terminal.
 * @a - number
 * @z -number
 * return
*/
#include<stdio.h>
void print_line(int n)
{
int z;
{
for (z = 0; z < n; z++)
{
putchar('_');
}
if (n < 0)
putchar('\n');
}
}
