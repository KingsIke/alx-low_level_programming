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

    int sum = 0;

    for (int i = 0; i < 1024; i += 5) {
        sum += i;
    }
    for (int i = 0; i < 1024; i += 3) {
        if (i % 5) sum += i;  /* already counted */
    }
    printf("%d\n", sum);
    return 0;
}


