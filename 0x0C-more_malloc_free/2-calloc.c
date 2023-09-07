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
ptr = (int *) malloc(nmemb * size);
if (ptr == NULL)
{
return (NULL);
}
memset(ptr, 0, nmemb * size);
return (ptr);
}
