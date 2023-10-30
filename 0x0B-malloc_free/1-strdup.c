/**
*_strdup - returns a pointer to a new string which is aduplicate of str
*  @str:  pointer to a null-terminated string that you want to duplicate.
*  @s - pointer to (char)and is used to store the DA duplicate string.
*  @lenght - calculates the length of the input string str
*@i - used as a loop  for iterating through the characters in the input string.
* Return: pointer *s.
*/
#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>

char *_strdup(char *str)
{
int i;
char *s;
int lenght = strlen(str);
if (str == NULL)
{
printf("failed to allocate memory");
return (NULL);
}
s = (char *) malloc((lenght + 1) * sizeof(char));
for (i = 0; str[i] != '\0'; i++)
{
s[i] = str[i];
}
s[i] = '\0';

return (s);
}
