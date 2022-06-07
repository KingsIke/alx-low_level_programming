#include "main.h"

/**
 * print_to_98 - print n to 98 counts
 *           separated by comma, followed
 *           by space and number should be
 *           printed in order
 *
 * @n: input
*/

void printNos(unsigned int n)
{

    if(n > 0)

    {

        printNos(n - 1);

        printf("%d ", n);

    }

    return;
}
 

int main()
{

    printNos(100);

    getchar();

    return 0;
}
