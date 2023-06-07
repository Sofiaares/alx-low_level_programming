#include <stdio.h>
/**
 * _print_rev_recursion - output of characters and strings
 * @s: string
 * Return: Always 0
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
	else
		putchar('\n');
}
