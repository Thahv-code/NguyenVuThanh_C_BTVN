#include <stdio.h>
#include <math.h>
int main()
{
    int a = 3;
    int b = 4;
    int c = 2;
    float d = (sqrt(pow(a, 2) + pow(b, 2))) / (c + 1);
    float e = (a * b) / c;
    float g = sqrt(abs(a - b) + pow(c, 2));
    float S = d + e - g;
    printf("S bang %.2f\n", S);
    return 0;
}