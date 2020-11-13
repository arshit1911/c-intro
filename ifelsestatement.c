#include <stdio.h>

int main()
{
    int a;
    printf("enter the num \n");
    scanf("%d", &a);
    if (a < 12)
    {
        printf("the entered number is smaller than 12 \n");
    }
    else
    {
        printf("the number is larger \n");
    }

    return 0;
}