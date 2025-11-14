#include <stdio.h>
int main()
{
    int a = 2;
    int b = 3;
    int c = 4;
    int d = 5;
    int A = a * b - 2 * c + 3 * (a - d);
    printf("A bang %d\n", A);
    return 0;
}