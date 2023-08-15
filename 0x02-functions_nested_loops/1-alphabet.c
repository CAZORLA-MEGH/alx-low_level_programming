/**
 * main - start point of the program
 * Description: prints the alphabet,
 * Return: always 0 its (success)
 * function Printalphabet - prints the alphabet a to z.
 */
#include <stdio.h>
void printa_lphabet(void)
{
int alpha;
for(alpha = 'a'; alpha <= 'z'; alpha++)
{putchar(alpha);
}
}
int main(void)
{
printa_lphabet();
return (0);

}

