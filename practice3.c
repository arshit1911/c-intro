#include <stdio.h>

int main()
{
    int radius;
    float pi = 3.14;
    printf("what is the radius of the circle\n");
    scanf("%d", &radius);

    printf("The area of your circle is %f", pi * radius * radius);
    return 0;
}