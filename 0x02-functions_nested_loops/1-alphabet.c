/**
 * print_alphabet -  prints the alphabet, in lowercase
 */

#include <stdio.h>
#include "main.h"
#include <unistd.h>
void print_alphabet(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
_putchar(letter);
_putchar('\n');
}
