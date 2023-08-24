/**
 *_strncat - concatenates two strings. and use at most n bytes from src
 * @dest : destination string
 * @src : source string
 * @n :  maximum number of characters to concatenate from the source string.
 * Return: dest
 */




#include<stdio.h>
#include <string.h>
char *_strncat(char *dest, char *src, int n)
{
strncat(dest, src, n);
return (dest);
}
