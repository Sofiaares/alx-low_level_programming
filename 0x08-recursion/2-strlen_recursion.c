#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strlen_recursion - calculate the length of a string
 * @s: string
 * Return: length
 */
int _strlen_recursion(char *s)
{
	int len = 0;
	if (*s)
	{
		len += _strlen_recursion(s + 1);
		len++;
	}
	return (len);
}
