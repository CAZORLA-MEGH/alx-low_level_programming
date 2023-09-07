/**
 * _calloc - llocates memory for an array
 *@nmemb :  number of elements
 *@size :  size of each element
 *@ptr - pointer to the array
 *Return:Return ptr
 */

#include <stdio.h>
#include <stdlib.h>
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
ptr = (int *) malloc(nmemb * sizeof(int));
if (ptr == NULL)
{
return (NULL);
}
free(ptr);
return (ptr);
}
