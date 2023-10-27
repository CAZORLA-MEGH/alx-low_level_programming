/**
 * *_strcat - concatenates two strings.
 * @dest : destination string
 * @src : source string
 * Return: dest
 */



#include<stdio.h>
#include <string.h>
char *_strcat(char *dest, char *src)
{
strcat(dest, src);
return (dest);
}
