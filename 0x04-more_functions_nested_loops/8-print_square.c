#include"main.h"

/**
 * print_square - print a square using the character #
 *
 * @size: is the size of the square
 * Return: a square made of '#'
 * Return: Always 0 (Success)
*/

void print_square(int size)
{
	int column, row;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (column = 1; column <= size; column++)
		{
			_putchar('#');
			for (row = 2; row <= size; row++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}