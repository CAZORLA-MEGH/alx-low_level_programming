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
ptr = malloc(height * sizeof(int *));
if (width <= 0 || height <= 0)
{
return (NULL);
}
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
ptr[i] = malloc (width * sizeof(int));
if (ptr[i] == NULL)
return (NULL);
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
ptr[i][j] = 0;
}
return (ptr);
}

