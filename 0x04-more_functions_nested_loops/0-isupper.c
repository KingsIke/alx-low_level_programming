#include "main.h"

/**
 * _isupper - check for uppercase character.
 * man isupper to learn more.
 * @c: character
 * Return: 1 if c is uppercase and 0 otherwise.
 */

int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
	{
		return (1);
	}
	return (0);
}
