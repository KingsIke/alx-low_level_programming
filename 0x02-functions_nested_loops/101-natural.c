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

int main()
{
    int x = 3;
    int y =5;
    int n =1024;
    int sum=0;
    printf("enter the valeus of x,y and z\n");
    scanf("%d%d%d",&x,&y,&n);
    printf("entered   valeus of x=%d,y=%d and z=%d\n",x,y,n);
    sum=x*((n/x)*((n/x)+1)/2)+y*((n/y)*((n/y)+1)/2)-x*y*(n/(x*y))*((n/(x*y))+1)/2;
    printf("sum is %d\n",sum);
    return 0;
}
