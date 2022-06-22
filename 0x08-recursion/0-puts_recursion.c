#include "main.h"
/**
 * _puts_recursion - functions like puts();
 * @s: input
 * Return: Always 00 (success)
 */
void _puts_recursion(char *s)
{
    if (*s == '\0')
        _putchar('\n');
    else
    {
        _putchar(*s);
        _puts_recursion(s + 1);
    }
}
