#include <stdio.h>
/**
 * _puts_recursion - output of characters and strings
 * @s: string
 * Return: always 0
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		putchar('\n');
}
