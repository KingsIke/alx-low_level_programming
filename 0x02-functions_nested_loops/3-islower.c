#include "main.h"

/**
 * _islower -  Write a function that checks for lowercase characters.
 *
 * @c: character to be checked Returns 1 if c is lowercase
 * Return: Always 0.
 */

int _islower(int c)
{
	if (c > 94 && c < 123)
		return (1);
	else
		return (0);
}
