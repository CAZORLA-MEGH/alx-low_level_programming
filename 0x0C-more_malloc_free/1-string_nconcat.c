#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *result;
size_t s2_length;
if (s1 == NULL) {
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}

s2_length = strlen(s2);


if (n >= s2_length)
{
n = s2_length;
}
result = (char *)malloc(strlen(s1) + n + 1);
if (result == NULL)
{
return NULL;
}

return result;
}
