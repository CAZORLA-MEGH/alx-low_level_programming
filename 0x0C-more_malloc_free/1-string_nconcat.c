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
unsigned int n2;
char *s3;
unsigned int size_s3;
while (s1 && s1[size_s1])
size_s1++;
while (s2 && s2[size_s2])
size_s2++;

if (n >= size_s2)
{
n2 = size_s2;
}
else
{
n2 = n;
}
size_s3 = size_s1 + n2 + 1;
s3 = malloc(size_s3 *sizeof(char));
if (s3 == NULL)
return (NULL);
for (i = 0; s1[i] != '\0'; i++)
{
s3[i] = s1[i];
}
for (j = 0; j < n2; j++)
{
s3[i] = s2[j];
i++;
}
i++;
s3[i] = '\0';
return (s3);
}

