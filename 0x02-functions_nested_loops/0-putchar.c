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
	int n = 0;
	char str[9] = "Kingsikem";

	while (n < 8)
	{
		_putchar(str[n]);
		n += 1;
	}
	_putchar('\n');
	return (0);
}
