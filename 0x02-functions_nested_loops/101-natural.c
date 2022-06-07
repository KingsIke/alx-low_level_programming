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
    int sum;
    int i;
    sum=0;
       for(i=0;i<1000;++i)
 {
      if((i%3==0)||(i%5==0))
     {
       sum=sum+i;
     }
 }

   printf("%d",sum);

}

