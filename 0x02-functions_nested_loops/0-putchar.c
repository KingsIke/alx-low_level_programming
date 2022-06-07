#include"main.h"

/**
 * main - Entry point
 *
 * Description: prints Kingsike using putchar prototype
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char str[] = "Kingsike";
	int ch;

	for (ch = 0; ch < 8; ++ch)
		Kingsike(str[ch]);
	Kingsike('\n');

	return (0);
}
