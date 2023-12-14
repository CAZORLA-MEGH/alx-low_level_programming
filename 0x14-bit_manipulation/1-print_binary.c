#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to print in binary
 */

void print_binary(unsigned long int n)
{
unsigned long int mask = 0x8000000000000000;
int started = 0;

if (n == 0)
{
printf("0");
return;
}

while (mask > 0)
{
if (n & mask)
{
printf("1");
started = 1;
}
else if (started)
{
printf("0");
}

mask >>= 1;
}

}
