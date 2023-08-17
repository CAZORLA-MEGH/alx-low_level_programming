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
int  i; 
char letter;
for (i = 0; i <= 10; i++)
{
	{
_putchar('\n');
}


for (letter = 'a'; letter <= 'z'; letter++)
{



_putchar(letter);
}



}
}



