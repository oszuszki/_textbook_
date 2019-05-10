#include <stdio.h>

int main()
{

    int a = 7;
    int b = 5;


    printf("a=%d b=%d\n", a, b);

    int c = a;
    a = b;
    b = c;

    printf("a=%d b=%d\n", a, b);

    b = b - a;
    a = a + b;
    b = a - b;

    printf("a=%d b=%d\n", a, b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("a=%d b=%d\n", a, b);

}
