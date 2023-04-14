#include<unistd.h>
/**
 * _putchar - writes the character c to stand out
 * @c - makes the character to print
 * Return: on perfectness 1.
 * On error, -1.is returned, and unerror is set appropriately.
 */
int _putchar(char c)
{
	return(write(1,&c, 1));
}
