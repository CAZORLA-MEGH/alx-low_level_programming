/**
 * str_concat -  concatenates two strings.
 *@s1: first string
 *@s2: seconde string
 *@s3 - concatenates s1 and s2
 *@len_s1 -lentgh s1
 *@len_s2 -lentgh s2
 * Return: NULL if s3 == NULL return s3
 */



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *str_concat(char *s1, char *s2)


{
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
char *s3;
int len_s1 = strlen(s1);
int len_s2 = strlen(s2);
if (s1 == NULL)
{
if (s2 == NULL)
return (NULL);
}
s3 = (char *) malloc(len_s1 + len_s2 + 1);
if (s3 == NULL)
{
return (NULL);
}
strcpy(s3, s1);
strcat(s3, s2);

return (s3);
}
