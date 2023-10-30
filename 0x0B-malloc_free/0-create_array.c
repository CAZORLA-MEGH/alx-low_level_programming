/**
*  create_array  - function calculates the value of x raised to the power of y.
*  @size:   the size of the array to be created.
*  @c: s the character with which to fill the array.
*  @i - used as a loop counter to iterate through the array elements.
*  @r -  This is a pointer to a character (char) and is used to store DNA
* Return: *r.
*/

#include <stdio.h>
#include "main.h"
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *r;
r = (char *) malloc((size + 1) * sizeof(char));
if (size == 0)
{
return (NULL);
}
i = 0;
while (i < size)
{
r[i] = c;
i++;
}
r[i] = '\0';
return (r);


}
