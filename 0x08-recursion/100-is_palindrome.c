/**
 * check - function checks if the string is a palindrome
 * @s: The string to check.
 * @start: The starting index of the substring.
 * @end: The ending index of the substring.
 *
 * Return: 1 if it's a palindrome, 0 otherwise.
 */

#include "main.h"
#include <stdio.h>
#include <string.h>

int check(char *s, int start, int end)
{
if (start >= end)
{
return (1);
}

if (s[start] != s[end])
{
return (0);
}

return (check(s, start + 1, end - 1));
}
/**
 *is_palindrome - calculates the length of the string and then call func check
 *@s : string
 * Return: 1
 */
int is_palindrome(char *s)
{
int length = strlen(s);
if (length == 0)
{
return (1);
}

return (check(s, 0, length - 1));
}




