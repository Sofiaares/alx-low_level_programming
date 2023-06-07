#include "main.h"
#include <stdio.h>
#include <math.h>
int _sqrt(int n, int i);
/**
 * _sqrt_recursion - square root function
 * @n: a number
 * @i: iterator
 * Return:  the natural square root of a number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 0));
}
/**
 * _sqrt - recurses to find the natural square of n
 * @n: number to calculate the square root of
 * @i: iterator
 * Return: the resulting square root
 */
int _sqrt(int n, int i)
{
	if (n < i * i)
		return (-1);
	if (n == i * i)
		return (i);
	return (_sqrt(n, i + 1));
}
