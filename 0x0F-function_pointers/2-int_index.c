
/**
*int_index - function that searches for an integer.
*@array: array of elements.
*@size: size of array.
*@cmp: function pointer.
*Return: int
*/
#include <stdio.h>
#include <string.h>
#include "function_pointers.h"

int int_index(int *array, int size, int (*cmp)(int))
{

int i;
if (size <= 0)
{
return (-1);
}
for (i = 0; i < size; i++)
{
if (!cmp(array[i])
return (-1)
if (cmp(array[i]))
{
return (i);
}
}
return (i);
}

