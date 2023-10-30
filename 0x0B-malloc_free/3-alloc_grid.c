/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width : row of array
 * @height : colum of array
 * @i - used to loop
 * @j - used to loop
 * @ptr - array 2 dimensiol
 * Return: ptr array 2 dimensiol
 */

#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
int i, j;
int **ptr;

if (width <= 0 || height <= 0)
{
return (NULL);
}

ptr = (int **)malloc(width * sizeof(int *));
if (ptr == NULL)
{
return (NULL);
}

for (i = 0; i < width; i++)
{
ptr[i] = (int *)malloc(height * sizeof(int));
}
for (i = 0; i < width; i++)
{
for (j = 0; j < height; j++)
{
ptr[i][j] = 0;
}
}
if (ptr[i] == NULL)
{
for (j = 0; j < i; j++)
{
free(ptr[j]);
}
free(ptr);
return (NULL);
}

return (ptr);
}

