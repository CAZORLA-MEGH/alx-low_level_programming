/**
 * _isupper - checks for uppercase character
 * @c: uppercase character
 * return: @c
*/
#include <stdio.h>
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
