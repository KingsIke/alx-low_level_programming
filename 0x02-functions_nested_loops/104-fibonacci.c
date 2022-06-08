#include"main.h"

/**
 * main - Entry point
 *
 * Description: prints the first 98 Fibonacci numbers
 *	starting with 1 and 2 followed by a new line
 *
 * Return: Always 0 (Success)
*/

void main()
{
    int fib1 = 1, fib2 = 2, fib3, num, count = 0;

    count = 98; /* fib1 and fib2 are already used */
    while (count < num)
    {
        fib3 = fib1 + fib2;
        count++;
        printf("%d\n", fib3);
        fib1 = fib2;
        fib2 = fib3;
   }
}
