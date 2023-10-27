/**
 * main - is the primary function in the C program
 * @argc: number of command-line arguments
 * @argv: array of strings
 * @i- variable used as a loop to iterate through the elements the argv array
 * @j- variable used as a loop to iterate through the characters  command-line
 * Return: 0 always.
*/

#include <stdio.h>
int main(int argc, char *argv[])
{
int i, j;
for (i = 0; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
putchar(argv[i][j]);
}
putchar('\n');
}
return (0);
}

