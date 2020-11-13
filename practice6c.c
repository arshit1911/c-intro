#include <stdio.h>

int main()
{
    int a = 10, b;
    b = ++a;
    printf("pre-increment value of a=%d and b=%d\n", a, b);

    b = a++;
    printf("post-increment value of a=%d and b=%d\n", a, b);

    b = --a;
    printf("pre-decrement value of a=%d and b=%d\n", a, b);

    b = a--;
    printf("post-decrement value of a=%d and b=%d\n ", a, b);

    return 0;
}