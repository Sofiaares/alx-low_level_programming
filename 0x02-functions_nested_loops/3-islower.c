#include "main.h"

/**
 * _islower - function to prints lower case
 *
 * @c: the caracter in ASCII code
 *
 * Return: 1 if it is a lower case
 * e*/

int _islower(int c)
{
	if (c <= 97 && c <= 122)
		return (1);
	else
		return (0);
}
