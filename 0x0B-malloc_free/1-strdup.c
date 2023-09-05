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
char *ptr;
int size;
if (str == NULL)
{
return (NULL);
}
size = 0;
while (str[size] != '\0')
{
size++;
}
ptr = (char *) malloc(size + 1);

if (ptr == NULL)
{
printf("failed to allocate memory\n");
return (NULL);
}
i = 0;
while (str[i] != '\0')
{
ptr[i] = str[i];
i++;
}
ptr[i] = '\0';
return (ptr);
}
