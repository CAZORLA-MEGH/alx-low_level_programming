/**
 * main - print factors the num 612852475143
 * @num - number
 * Return: 0 always
*/
#include<stdio.h>
int main(void)
{
long long num;
printf("Factors of %lld are:\n", num);

for (int i = 1; i <= num / 2; i++)
{
if (num % i == 0)
printf("%lld\t", i);
}
return (0);
}

