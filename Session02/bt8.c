#include <stdio.h>
int main()
{
    int number = 12345;
    int a1 = number % 10 * 10000;
    int a2 = number / 10;
    int b1 = a2 % 10 * 1000;
    int b2 = a2 / 10;
    int c1 = b2 % 10 * 100;
    int c2 = b2 / 10;
    int d1 = c2 % 10 * 10;
    int d2 = c2 / 10;
    int flip = a1 + b1 + c1 + d1 + d2;
    printf("so dao nguoc la %d\n", flip);
    return 0;
}