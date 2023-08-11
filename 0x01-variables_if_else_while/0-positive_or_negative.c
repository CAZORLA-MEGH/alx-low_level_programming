#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - start point of the program
 * Return: always 0 its (success)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
{
printf("%d is positive", n);
}
if (n < 0)
{
printf("%d is negative", n);
}
if (n == 0)
{
printf("%d is zero", n);
}
return (0);
}
