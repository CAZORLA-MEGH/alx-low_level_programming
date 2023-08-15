/**
 * main - start point of the program
 * Description: prints the alphabet,
 * Return: always 0 its (success)
 * function Printalphabet - prints the alphabet a to z.
 */

#include <stdio.h>
int print_alphabet_x10(void)
{
int alpha;
for (alpha = 'a'; alpha <= 'z'; alpha++)
{putchar(alpha);
}
}
int main(void)
{
print_alphabet_x10();
return (0);
}

