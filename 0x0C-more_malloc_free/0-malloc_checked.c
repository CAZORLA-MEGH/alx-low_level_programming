/**
 * malloc_checked - 
 *@b : number of byte
 *Return: pointer to the allocated memory
 */
#include <stdio.h>
#include <stdlib.h>
void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);
if(ptr == 0)
exit(98);
return ptr;
}
