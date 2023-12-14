/**
* main - The primary function in the C program.
* @argc:  number of command-line arguments
 * @argv: array of strings
* Return: number of line commande
*/
#include <stdio.h>
#include "main.h"
int main(int argc,  __attribute__((unused))char *argv[])
{

_putchar('0' + argc - 1);
_putchar('\n');
return (0);
}

