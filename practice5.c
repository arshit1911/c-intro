#include <stdio.h>

int main()
{
    int year = 1, principal = 100, rate = 4;
    int simpleIntrest = (principal * rate * year) / 100;

    printf("The value of simple intrest is %d", simpleIntrest);
    return 0;
}