#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - start point of the program
* Return: always 0 its (success)
*/
int main(void)
{
int n, digit;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
digit = n %10;
if ( digit > 5 )
{
printf ("last digit of %d is %d and is great than 5", n , digit);
}
if ( digit == 0 )
{
printf ("last digit of %d is %d and is 0", n, digit);
}
if ( digit > 6 && digit != 0 )
{
printf ("last digit of %d is %d and is less than 6 and not 0", n, digit);
return(0);
}
}
