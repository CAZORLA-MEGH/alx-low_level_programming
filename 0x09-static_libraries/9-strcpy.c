/**
 * _strcpy - copies the string
 * @src : string
 * @dest : string
 * Return: string
 */






#include<stdio.h>
#include <string.h>
char *_strcpy(char *dest, char *src)
{
int LEN;
strcpy(src, dest);
printf("%s", src);
return (dest);
}
