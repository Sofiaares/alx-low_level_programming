#include "main.h"
/**
 * _puts_recursion - prints a string followed by a new line
 * @s: pointer to string
 *
 */
void _puts_recursion(char *s)
{
        s = "lpa\0";
        if (*s == '\0')
        {
                _putchar('\n');
                return;
        }
        _putchar('\n');
        s++;
        _puts_recursion(s);
}
