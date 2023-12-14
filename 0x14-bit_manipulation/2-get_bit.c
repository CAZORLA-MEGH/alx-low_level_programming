#include "main.h"
/**
 *get_bit - that sets the value of a bit to 1 at a given index.
 *@n : number to evaluate
 *@index : index starting from 0, of the bit we want to get
 *Return: Value of bit at index, or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}

return ((n & (1 << index)) ? (1) : (0));
}

