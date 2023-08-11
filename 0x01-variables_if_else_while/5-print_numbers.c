#include <stdio.h>
/**
 *  *  * main - start point of the program
 *   *   * Return: always 0 its (success)
 *    *    */
int main(void)
{
for (int x  = 0; x <= 10; x++)
{
if (x == 1)
{
continue;
}
if (x == 10)
{
break;
}
printf("%d", x);
}
return(0);
}

