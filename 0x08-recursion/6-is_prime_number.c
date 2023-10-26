/**
 * is_divisible_recursive - recursive function that checks if n is divisible
 * @n : num
 * @divisor : test num
 * Return: 1 or 0.
 */

#include "main.h"
#include <stdio.h>

int is_divisible_recursive(int n, int divisor)
{
if (divisor == 1)
{
return (0);
}

if (n % divisor == 0)
{
return (1);
}

return (is_divisible_recursive(n, divisor - 1));
}

 /**
 * is_prime_number - cheque if the input integer is a prime number
 *@n : number
 * Return: 1 if number prime or  0if not prime.
 */

int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}

if (n <= 3)
{
return (1);
}

return (!is_divisible_recursive(n, n - 1));
}

