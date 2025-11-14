

#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a = 3, b = 2;
    int tong, hieu, tich;
    double thuong;

    tong = a + b;
    hieu = a - b;
    tich = a * b;
    thuong = a / b;
    printf("tong %d\nhieu %d\ntich %d\nthuong %lf\n", tong, hieu, tich, thuong);

    return 0;
}