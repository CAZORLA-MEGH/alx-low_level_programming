/**
 *argstostr - concatenates all the arguments of your program.
 *@ac : count of args passed to the function
 *@av : string array to the function
 *@i - used for loop
 *@j - used for loop
 *@temp - use for loop
 *@length - size of all argument
 *@ptr - new string
 *Return: pointer of the new string
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *argstostr(int ac, char **av)
{
int i, j, temp = 0, length = 0;
char *ptr;
if (ac == 0 || av == NULL)
return (NULL);


for (i = 0; i < ac; i++)
{
length += strlen(av[i]) + 1;
}

ptr = (char *) malloc(length *sizeof(char));
if (ptr != NULL)
{
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
ptr[temp] = av[i][j];
temp++;
}
ptr[temp] = '\n';
temp++;
}
ptr[temp] = '\0';
}
else
{
return (NULL);
}

return (ptr);
}

