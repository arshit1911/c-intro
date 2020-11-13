#include <stdio.h>

int main()
{
    int x;
    printf("Enter your integer number: ");
    scanf("%i", &x);

    if (x < 0)
    {
        printf("The number is negative");
    }
    else
    {
        printf("Number is positive");
    }
    return 0;
}