#include <stdio.h>
/**
 * main - start point of the program
 * Return: always 0 its (success)
 *
*/
int main(void)
{
printf("size of a char:%zu byte(s)\n", sizeof(char));
printf("size of an int:%zu byte(s)\n", sizeof(int));
printf("size of a long int:%zu(s)\n", sizeof(long int));
printf("size of a long long int:%zu byte(s)\n", sizeof(long long int));
printf("size of a float:%zu byte(s)\n", sizeof(float));
return (0);
}
