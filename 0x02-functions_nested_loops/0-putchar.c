/**
 * main - start point of the program
 * Description :  prints _putchar
 * Return: always 0 its (success)
 */
#include <stdio.h>
#include <main.h>
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
		return (write(1, &c, 1));

}
int main(void)
{
putchar('_');
putchar('p');
putchar('u');
putchar('t');
putchar('c');
putchar('h');
putchar('a');
putchar('r');
return (0);
}
