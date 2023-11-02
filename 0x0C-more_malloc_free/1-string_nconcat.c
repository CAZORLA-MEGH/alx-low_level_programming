/**
 *string_nconcat -  that concatenates two strings.
 *@s1 :first string
 *@s2 :seconde string
 *@n : number the first char in s2
 *Return: pointer shall point to a newly allocated space in memory
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j;
unsigned int size_s1 = 0;
unsigned int size_s2 = 0;
unsigned int size_s3 = 0;
unsigned int num = n;
char *s3;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (i = 0; s1[i] != '\0'; i++)
size_s1++;
for (i = 0; s2[i] != '\0'; i++)
size_s2++;
if (n >= size_s2)
num = size_s2;
size_s3 = size_s1 + num + 1;
s3 = malloc(sizeof(char) * (size_s3));

if (s3 == NULL)
return (NULL);
for (i = 0; s1[i] != '\0'; i++)
{
s3[i] = s1[i];
}
for (j = 0; j < num; j++)
{
s3[i + j] = s2[j];
}
s3[i + j] = '\0';
return (s3);
}



