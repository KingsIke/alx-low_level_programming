#include"main.h"

/**
 * print_last_digit - print last digit of a number.
 *
 * @n: takes number input
 *
 * Return: of lastDigit
 
*/

int print_last_digit(int nld)
{
	int pld;

	pld = (nld % 10);

	if (pld < 0)
	{
		pld = (-1 * pld);
	}

	_putchar(pld + '0');
	return (pld);
}
