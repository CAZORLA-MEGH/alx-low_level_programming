/**
 * print_numbers - prints the numbers, from 0 to 9
 * @a - number
*/
#include <stdio.h>
void print_numbers(void)
{
char a;
for (a = '0'; a <= '9'; a++)
putchar(a);
putchar('\n');
}
