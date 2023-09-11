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
int LEN;
	char cpy[LEN + 1] = {0};

strcpy(src, dest);
printf("%s", src);
return (dest);
}
