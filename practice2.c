#include <stdio.h>

int main()
{
    int length, breadth;
    printf("What is the length of this rectangle\n");
    scanf("%d", &length);

    printf("what is the breadth of this rectangle\n");
    scanf("%d", &breadth);

    printf("The area of your rectangle is %d", length * breadth);
    return 0;
}
