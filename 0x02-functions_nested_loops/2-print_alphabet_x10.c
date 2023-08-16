/**
 * main - start point of the program
 * function print_alphabet -  prints the alphabet, in lowercase
 * Return: always 0 its (success)
 */

#include <stdio.h>
#include "main.h"
#include <unistd.h>
void print_alphabet_x10(void)
{
char letter;
int j;

for (letter = 'a'; letter <= 'z'; letter++)
{



_putchar(letter);
}


_putchar('\n');
}




