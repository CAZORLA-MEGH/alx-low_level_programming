#include "main.h"
/**
 *number_of_bits - calculate number of bit
 *@result : xor n and m
 *Return: counter
 */
unsigned int number_of_bits(unsigned long int result)
{
unsigned int count = 0;
while (result)
{
count += result & 1;
result >>= 1;
}
return (count);
}
/**
 *flip_bits - returns the number of bits you would need.
 *@n :numeber1
 *@m :number2
 *Return: number of bit
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int result = n ^ m;
return (number_of_bits(result));
}

