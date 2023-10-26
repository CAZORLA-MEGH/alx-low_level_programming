#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>

int _putchar(char c);
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int calculate_sqrt(int n, int i);
int calculate_prime(int n, int i);
int is_prime_number(int n);int is_palindrome(char *s);
int check(char *s, int start, int end);

#endif /* MAIN_H */
