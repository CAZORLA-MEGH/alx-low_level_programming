/**
 * print_array - rints n elements of an array of integers
 * @a : array
 * @n : Length of Array
 * @i - int
 */
#include<stdio.h>
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i < n - 1)
{
printf(", ");
}


}
printf("\n");
}
