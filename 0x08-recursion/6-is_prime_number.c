#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - says if the input is a prime number or not
 * @n: a number that could be a prime
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	if (n < 1)
		return (0);
	if (n == 1)
		return (1);
	return (is_prime_number(n - 1));
}
/**
 * _prime - the imput is prime
 *  @n: number to evaluate
 *  @i: iterator
 *  Return: 1 if the input integer is a prime number, otherwise return 0
 */
int _prime(int n, int i)
{
	if (n == 2 * i + 1)
		return (1);
	else
		return (0);
	return (_prime(n, n - 1));
}
