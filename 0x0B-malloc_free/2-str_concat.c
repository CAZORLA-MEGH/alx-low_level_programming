/**
* str_concat - concatenates two strings and return the result.
*@s1: pointer to a null-terminated string.
*@s2: pointer to a null-terminated string.
*@i - used as loop counters.
*@j - used as loop counters for.
*@lenght_s1 -  lengths of the s1
*@lenght_s2 -  lengths of the s2
*@lenght_s3 -  lengths of the s3
*Return: pointer *s3
*/
#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{
int j, i;
int lenght_s1 = strlen(s1);
int lenght_s2 = strlen(s2);
int lenght_s3 =  lenght_s1 + lenght_s2;
char *s3;
s3 = (char *) malloc((lenght_s3 + 1) * sizeof(char));
if (s3 == NULL)
{
return (NULL);
}
for (i = 0; s1[i] != '\0'; i++)
{
s3[i] = s1[i];
}
for (i = lenght_s1, j = 0; s2[j] != '\0'; i++, j++)
{
s3[i] = s2[j];
}
s3[i] = '\0';
return (s3);
}

