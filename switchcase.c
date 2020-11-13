#include <stdio.h>
int main()
{
    char C, R, S, choice;
    int l, b, r, pi;
    float area;
    pi = 3.14;
    printf("input C for area of circle\n");
    printf("input R for area of rectangle\n");
    printf("input S for area of square\n");
    printf("input your choice");
    scanf("%c", &choice);
    switch (choice)
    {
    case 'C':
        printf("enter the radius of circle\n");
        scanf("%d", &r);
        area = pi * r * r;
        printf("the area of circle is %f \n", area);
        break;
    case 'R':
        printf("enter the length and breadth of rectangle\n");
        scanf("%d%d", &l, &b);
        area = l * b;
        printf("the area of rectangle is %f\n", area);
        break;
    case 'S':
        printf("enter the length of square\n");
        scanf("%d", &l);
        area = l * l;
        printf("the area of square is %f\n", area);
        break;
    default:
        printf("enter a valid input \n");
    }
    return 0;
}
