/**
 *binary_to_uint - converts a binary number to an unsigned int.
 *@b : the binary number as a string
 *Return: the converted value
 */
#include "main.h"
unsigned int binary_to_uint(const char *b)
{
int i;
unsigned int dec = 0;
if (!b)
{
return (0);
}
for (i = 0; b[i]; i++)
{
if (b[i] != '0' && b[i] != '1')
return (0);
dec = (dec << 1) + (b[i] - 48);
}
printf("decimal = %u\n", dec);
return (dec);
}
