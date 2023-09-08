/**
 *_realloc -  reallocates a memory block
 *@ptr :pointer to the memory previously allocated with a call to malloc
 *@old_size : is the size, in bytes, of the allocated space for ptr
 *@new_size : is the new size, in bytes of the new memory block
 *@new_ptr - new memory block
 *Return: return NULL
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;
if (ptr == NULL)
{
return (malloc(new_size));
}
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}

if (new_size == old_size)
{
return (ptr);
}

if (new_size > old_size)
{

new_ptr = malloc(new_size);
if (new_ptr == NULL)
{
return (NULL);
}
memcpy(new_ptr, ptr, old_size);
free(ptr);
return (new_ptr);
}
if (new_size < old_size)
{
new_ptr = malloc(new_size);
if (new_ptr == NULL)
{
return (NULL);
}
memcpy(new_ptr, ptr, new_size);
free(ptr);
return (new_ptr);
}
return (NULL);
}
