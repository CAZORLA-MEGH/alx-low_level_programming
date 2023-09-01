/**
 * main - prints its name, followed by a new line.
 * @argc :size of the argv array
 * @argv :array of size argc
 * Return: always 0
 */

#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
if (argc > 0)
printf("%s\n", argv[0]);
return (0);
}
