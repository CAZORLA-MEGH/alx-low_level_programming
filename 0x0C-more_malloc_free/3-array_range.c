/**
 *array_range - creates an array of integers
 *@min :The minimum value of the range
 *@max : The maximum value of the range.
 *@ptr - pointer of array
 *@i - for loop
 *Return: return ptr
 */


#include <stdio.h>
#include <stdlib.h>

int *array_range(int min, int max)
{
int *ptr;
int i;

if (min > max)
{
return (NULL);
}


ptr = (int*) malloc((max - min + 1) * sizeof(int));
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; i <= max - min + 1; i++)
{
ptr[i] = i;
}
return (ptr);
}
