#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked -  allocates memory using malloc
 * @b: amount of bytes
 * return: pointer to the allocated memory; if malloc fails exit with 98
 */
void *malloc_checked(unsigned int b)
{
	void *all_mem;

	all_mem = malloc(b);
	if (all_mem == NULL)
		exit(98);
	return (all_mem);
}
