
/**
 *  _realloc - that reallocates a memory block
 * @ptr :  is a pointer to the memory previously allocated
 * @old_size : is the size, in bytes, of the allocated space for ptr
 * @new_size : is the new size, in bytes of the new memory block
 * Return: pointer
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
unsigned int i;
char *new_ptr;
char *ptr_void;
if (ptr == NULL)
{
new_ptr = malloc(new_size);
return (new_ptr);
}
if (new_size == old_size)
return (ptr);
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);
ptr_void =  ptr;
if (new_size < old_size)
{
for (i = 0; i < new_size; i++)
new_ptr[i] = ptr_void[i];
}

if (new_size > old_size)
{
for (i = 0; i < old_size; i++)
new_ptr[i] = ptr_void[i];
}

free(ptr);
return (new_ptr);

}

