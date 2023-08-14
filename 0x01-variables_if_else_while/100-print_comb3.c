/**
 * main - start point of the program
 * Description :prints must different combinations of two digits .
 * Return: always 0 its (success)
 */

#include <stdio.h>
int main(void)

{
int x, z;
for ( x = 0; x <= 8; x++)
{
for ( z = x + 1; z <= 9; z++)
{
putchar(x +'0');
putchar(z +'0');
if (x < 8)
{
putchar(',');
putchar(' ');

}
}
}
putchar('\n');
return (0);
}

