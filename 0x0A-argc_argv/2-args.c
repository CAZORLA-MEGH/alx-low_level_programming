/**
 *main -  prints all arguments it receives
 *@argc :size of the argv array
 *@argv :array of size argc
 *Return: always 0
 */
#include <stdio.h>

int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)

printf("%s\n", argv[i]);
return (0);
}
