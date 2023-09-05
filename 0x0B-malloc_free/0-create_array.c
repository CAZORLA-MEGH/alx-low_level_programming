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
printf("failed to allocate memory\n");
return (NULL);
}
for (i = 0; i < size; i++)
{
array[i] = c;
}

return (array);
}

