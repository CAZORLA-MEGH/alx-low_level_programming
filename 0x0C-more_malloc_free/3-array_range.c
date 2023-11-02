/**
* array_range -  creates an array of integers
* @min : min value
* @max :max value
* @i - used foor loop
* @arr - pointer of array
*Return: the pointer to the newly created array
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *array_range(int min, int max)
{
int i;
int *arr;
if (min > max)
{
return (NULL);
}
arr = malloc((max - min + 1) * sizeof(int));
if (arr == NULL)
{
return (0);
}

for (i = min; i <= max; i++)
{
arr[i] = i;
}
return (arr);
}

