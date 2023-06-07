#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - output of characters and strings in reverse
 * @s: string
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
