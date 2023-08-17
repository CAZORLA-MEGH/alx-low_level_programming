/**
 * print_most_numbers - prints the numbers, from 0 to 9
 * @a - number
*/
#include<stdio.h>
void print_most_numbers(void)
{
char a;
for (a = '0'; a <= '9'; a++)
{
if (a == '2')
{
continue;

}
{
if (a == '4')
{
continue;
}
putchar(a);
}
}
putchar('\n');
}
