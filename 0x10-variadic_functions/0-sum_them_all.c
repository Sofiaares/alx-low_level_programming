#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: Number of parameters to be added
 * Return: 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	unsigned int index, sum = 0;

	if (n == 0)
		return (0);

	va_start(numbers, n);

	for (index = 0; index < n; index++)
		sum += va_arg(numbers, int);
	va_end(numbers);

	return (sum);
}
