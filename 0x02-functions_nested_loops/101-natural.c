#include"main.h"

/**
 * main - Entry point program that computes and prints the add of all
 *
 * Description: computes the add of all
 *		the multiples of 3 or 5
 *		below 1024 (excluded)
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int add, nums;

	for (nums = 0; nums < 1024; ++nums)
	{
		if ((nums % 3 == 0) || (nums % 5 == 0))
			add += nums;
	}
	printf("%d\n", add);

	return (0);
}
