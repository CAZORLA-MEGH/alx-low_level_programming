/**
 * swap_int - function that swaps the values of two integers.
 * @a: num 1
 * @b: num 2
 *
*/



#include <stdio.h>
void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
