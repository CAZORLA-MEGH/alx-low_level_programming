/**
 * main - start point of the program
 * Description :
 * Return: always 0 its (success)
 */

#include <stdio.h>
#include "main.h"
#include <unistd.h>
void print_alphabet(void)
{
char letter;
for(letter= 'a'; letter <= 'z'; letter++)
_putchar(letter);
_putchar('\n');
}
