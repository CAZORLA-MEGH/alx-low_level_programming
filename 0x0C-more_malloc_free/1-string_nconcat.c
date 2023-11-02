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
char *s3;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1 && s1[size_s1])
size_s1++;
while (s2 && s2[size_s2])
size_s2++;

if (n < size_s2)
s3 = malloc(sizeof(char) * (size_s1 + n + 1));
else
s3 = malloc(sizeof(char) * (size_s1 + size_s2 + 1));

if (s3 == NULL)
return (NULL);
for (i = 0; s1[i] != '\0'; i++)
{
s3[i] = s1[i];
}
for (j = 0; j < n; j++)
{
s3[i + j] = s2[j];
}
s3[i + j] = '\0';
return (s3);
}

