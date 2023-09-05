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
int size = strlen(str);
char *ptr = strdup(str);
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
ptr[i] = str[i];
}
return (ptr);
}
