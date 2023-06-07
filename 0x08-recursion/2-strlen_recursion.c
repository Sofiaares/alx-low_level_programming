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
	int length = 0;
	if(*s)
	{
		length = _strlen_recursion(s + 1);
		length++;
	}
	return (length);
}
