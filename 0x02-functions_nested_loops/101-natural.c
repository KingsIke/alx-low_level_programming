#include"main.h"
#include<stdio.h>

/**
 * main - Entry point program that computes and prints the add of all
 *
 * Description: computes the add of all
 *		the multiples of 3 or 5
 *		below 1024 (excluded)
 *
 * Return: Always 0 (Success)
*/

int main ( void ) {

    long int x,total = 0;

for(x = 0; x < 1024; ++x)
{
    if(x % 3 == 0)
        total = total + x;
    else if(x % 5 == 0)
        total = total + x;
}

printf("%ld", total);
}



