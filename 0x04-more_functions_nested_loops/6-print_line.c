#include"main.h"

/**
 * print_line - print a straight line
 * @n: is the number of times the _ character
 *     should be printed
 * Return nothing
*/

void print_line(int n)
{
	int co;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (co = 1; co <= n; co++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
