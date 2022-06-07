#include"main.h"

/**
 * print_alphabet - utilizes on the _putchar function to print
 *                 the alphabet a - z
*/

void print_alphabet(void)
{
	int king ;

	for (king = 'a'; king <= 'z'; king++)
		_putchar(king);
	_putchar('\n')
}
