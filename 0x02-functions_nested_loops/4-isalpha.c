#include"main.h"

/**
 * _isalpha -a function to checks if character is a letter
 *            both lowercase or uppercase
 *
 * takes input from other functions.
 *
 * Return: 1 is c if true else 0
*/

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
