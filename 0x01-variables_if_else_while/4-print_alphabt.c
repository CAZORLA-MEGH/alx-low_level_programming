#include <stdio.h>
/**
 * main - start point of the program
 * Return: always 0 its (success)
 */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z' ; ch++)
{
if (ch != 'q' && ch != 'e')
{
putchar(ch);
}

}
putchar('\n');
return (0);
}
