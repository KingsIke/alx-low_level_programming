#include"main.h"

/**
 * print_most_numbers - print 0 - 9 apart
 *                 from 2 and 4 and you can
 *                 only use _putchar twice
 * Return: Always 0 (Success)
*/ 

void print_most_numbers(void)
{
	int c = 48;

	while (c < 58)
	{
		if (!(c == '2' || c == '4'))
			_putchar(c);
		c++;
	}
	_putchar('\n');
}
