/**
 *_strdup -duplicates a string returning a pointer to the newly allocated space
 *@str: pointer stirng
 *@i -for loop
 *@size - lentgh string
 *@ptr -duplicateString
 * Return: return NULL if input NULL , return ptr if successful
 */


#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char *_strdup(char *str)
{
int i;
int size = 0;
char *ptr;

while (str[size]!= '\0')
{
	size++;
}
ptr =(char *) malloc(size + 1);

if (ptr == NULL)
{
return (NULL);
}

for (i = 0; i < size; i++)
{
ptr[i] = str[i];
}
ptr[size] = '\0';
return (ptr);
}
