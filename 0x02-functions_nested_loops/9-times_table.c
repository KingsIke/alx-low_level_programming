#include"main.h"

/**
 * times_table - prints the 9 times table starting with zero
 *
 * Prototype: void times_table(void)
 * Example Table
 * 0, 0, 0, 0, ..
 * 0, 1, 2, 3, ..
 *start = row, end = column, d = digits of current result
*/
void times_table(void)
{
	int start, end, d;

	for (start = 0; start <= 9; start++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (end = 1; end <= 9; end++)
		{
			d = (start * end);
			if ((d / 10) > 0)
			{
				_putchar((d / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((d % 10) + '0');

			if (end < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}

}
