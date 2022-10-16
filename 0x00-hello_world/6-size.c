#include <stdio.h>

/**
 * main - main function of code
 *
 * Return: Returns 0
 */

int main(void)
{
    char C;
    int I;
    long L;
    long long int LL;
    float F;

    printf("Size of a char: %zu bytes\n", sizeof(C));
    printf("Size of an int: %zu bytes\n", sizeof(I));
    printf("Size of a long int: %zu bytes\n", sizeof(L));
    printf("Size of long long int: %zu bytes\n", sizeof(LL));
    printf("Size of a float: %zu bytes\n", sizeof(F));

    return (0);
}
