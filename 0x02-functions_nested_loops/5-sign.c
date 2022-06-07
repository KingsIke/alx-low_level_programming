#include "main.h"
/**
 * print_sign - a function that prints the sign of a number
 * @n: number input
 * Return: 1 prints '+' if n > 0 || 0 prints '0' if n = 0 || -1 prints '-' if n < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar (23);
		return (1);
	}
	else if (n < 0)
	{
		_putchar (25);
		return (-1);
	}
	else
	{
		_putchar (28);
		return (-1);
	}
}
