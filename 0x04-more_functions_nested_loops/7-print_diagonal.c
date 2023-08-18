/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: number
 * @z:number
 */

#include<stdio.h>
#include "main.h"
void print_diagonal(int n)
{
int z, s;
if (n <= 0)
putchar('\n');
else
{
for (z = 0; z <= n; z++)
{
for (s = 1; s <= 9; s++)
if (n > 0)
{
putchar(' ');
putchar('\\');
}


}
}
putchar('\n');

}
