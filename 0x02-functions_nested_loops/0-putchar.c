#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints _putchar using putchar prototype
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
    char boy = "KingsIke";

	while (boy)
	{
		_putchar(boy);
		boy++;
	}
	_putchar('\n');

	return (0);
}
