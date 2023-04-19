#include "function_pointers.h"

/**
 * int_index - returns the index of the first element If size <= 0, return -1
 * @array: array
 * @size: the number of elements in the array array
 * @cmp: pointer to function of one of the 3 in main
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
