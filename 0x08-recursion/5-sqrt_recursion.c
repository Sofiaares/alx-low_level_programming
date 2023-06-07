#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 * _sqrt_recursion - square root function
 * @n: a number
 * Return:  the natural square root of a number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (natural_sqrt_recursion(n, 0));
}
/**
 * natural_sqrt_recursion - find the natural square
 * @n : the number to calculate the sqaure root of
 * @i: iterator
 * Return: the resulting square root
 */
int _sqrt_recursion(int n, int i)
{
	if (n < i * i)
		return (-1);
	if (n == i * i)
		return (i);
	return (natural_sqrt_recursion(n, i + 1));
}
