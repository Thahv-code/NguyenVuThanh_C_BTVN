#include <stdio.h>
#include <math.h>
int main()
{
    int a = 2;
    int b = 3;
    int c = 4;
    int A = pow(a, 3) + pow(b, 2) + 2 * c + sqrt(a + b - c);
    printf("A bang %d\n", A);
    return 0;
}