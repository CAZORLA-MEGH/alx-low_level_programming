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
int size = max - min + 1;
if (min > max)
{
return (NULL);
}

arr = malloc((size) * sizeof(int));
if (arr == NULL)
{
return (0);
}

for (i = 0; i < size; i++)
{
arr[i] = min;
min++;
}
return (arr);
}



