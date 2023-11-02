/**
 *_calloc - that allocates memory for an array
 *@nmemb :number ellemnt
 *@size:size of variable
 *Return: pointer to the allocated memory.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *arr;
unsigned int total_size = nmemb * size;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
arr = malloc(total_size);
if (arr == NULL)
return (NULL);
if (arr != NULL)
{
memset(arr, 0, total_size);
}
return (arr);
}

