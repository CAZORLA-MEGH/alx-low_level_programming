/**
 *create_array -creates an array of chars,initializes it with a specific char.
 *@size : number element array
 *@c : char
 *@i -for loop
 *@array - pointer
 * Return: if array == NULL return NULL else return array
 */
#include <stdio.h>
#include <stdlib.h>


char *create_array(unsigned int size, char c)
{
unsigned int i;
char *array = malloc(size * sizeof(c));
if (array == NULL)
{
return (NULL);
}
if (size == 0)
{
printf("failed to allocate memory\n");
return (1);
}
for (i = 0; i < size; i++)
{
array[i] = c;
}

return (array);
}

