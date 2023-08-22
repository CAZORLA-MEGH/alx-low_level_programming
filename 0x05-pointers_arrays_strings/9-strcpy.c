/**
 * *_strcpy - copies the string
 * @src 
 * @dest
 * 
 */






#include<stdio.h>
#include <string.h>
char *_strcpy(char *dest, char *src)
{
strcpy(src, dest);
printf("%s", src);
return (dest);
}
