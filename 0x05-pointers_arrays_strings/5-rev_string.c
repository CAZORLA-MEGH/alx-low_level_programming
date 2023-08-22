/**
 * rev_string - function that reverses a string.
 * @s : string
 * @len - length string
 * @a - actual lentgh
 * @b - revers string
 * @ch - char
*/


#include <stdio.h>
#include<string.h>
void rev_string(char *s)
{
int len, a, b;
char ch;

for (len = 0; s[len] != '\0'; len++)
;
a = len - 1;

for (b = 0; b < len / 2; b++, a--)
{
ch = s[a];
s[a] = s[b];
s[b] = ch;
}



}
