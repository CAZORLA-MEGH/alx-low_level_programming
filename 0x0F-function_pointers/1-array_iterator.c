/**
*array_iterator - function that executes function given as param.
*@array: array of elements.
*@size: size of array.
*@action: function pointer.
*/
#include <stdio.h>
#include <string.h>
#include "main.h"

void array_iterator(int *array, size_t size, void (*action)(int))
{

size_t i = 0;
if (array && size > 0 && action)
for (i = 0; i < size; i++)
{
action(array[i]);
}
}

