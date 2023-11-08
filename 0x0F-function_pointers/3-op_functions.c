#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - calculates the sum of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - calculates the sub of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: sub of a and b
 */

int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - calculates the mul of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: mul of a and b
 */
int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - calculates the div of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: div of a and b
 */
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}

return (a / b);
}

/**
 * op_mod - calculates the mod of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: mod of a and b
 */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
