#include "main.h"


/**
 * _strcat - appends src to the dest string
 * @dest: string to append by src
 * @src: string to append to dest
 *
 * Return: address of dest
 */

int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    ptr = _strcat(s1, s2);
    printf("%s", s1);
    return (0);
}
