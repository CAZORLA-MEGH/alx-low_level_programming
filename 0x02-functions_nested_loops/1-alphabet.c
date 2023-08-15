/**
 * main - start point of the program
 * Description: prints the alphabet,
 * Return: always 0 its (success)
 * function Printalphabet - prints the alphabet a to z.
 */
#include <stdio.h>
void print_alphabet(void)
{
int alpha;_
for(alpha = 'a'; alpha <= 'z'; alpha++)
{putchar(alpha);
}
}
int main(void)
{
print_alphabet();
return (0);

}

