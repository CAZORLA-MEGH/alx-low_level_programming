/**
 * _memset - that fills memory with a constant byte
 * @s : pointer
 * @b :  constant byte
 * @n : bytes of the memory
 * Return: return s
 */

#include<stdio.h>
#include<string.h>
char *_memset(char *s, char b, unsigned int n)
{
memset(s,  b, n);
return (s);
}
