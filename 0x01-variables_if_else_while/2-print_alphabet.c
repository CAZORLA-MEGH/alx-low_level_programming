#include <stdio.h>
/**
* main - start point of the program
* Return: always 0 its (success)
*/
int main(void)
{
for(char x =97; x >= 122; x++)
if(x == 98)
{
continue;
}
if(x == 123)
{
break;
}
putchar("%c\n", x);
}
return (0);
}

