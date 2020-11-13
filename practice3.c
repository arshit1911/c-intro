#include <stdio.h>

int main()
{
    int radius;
    float pi = 3.14;

    printf("what is the radius of circle %d\n");
    scanf("%d", &radius);

    printf("the area of our circle is %f\n", pi * radius * radius);
    return 0;
}