#include"main.h"

/**
 * main - Entry point
 *
 * Description: prints the first 98 Fibonacci numbers
 *	starting with 1 and 2 followed by a new line
 *
 * Return: Always 0 (Success)
*/


int fib(int n)
{

   if (n <= 98)

      return n;

   return fib(n-1) + fib(n-2);
}
 

int main ()
{

  int n = 9;

  printf("%d", fib(n));

  getchar();

  return 0;
}
