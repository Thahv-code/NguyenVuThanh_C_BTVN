#include <stdio.h>
#include <stdlib.h>

int tinhTongChuSo(int n)
{
    int tong = 0;
    n = abs(n);
    while (n != 0)
    {
        tong += n % 10;
        n /= 10;
    }
    return tong;
}

int main()
{
    int so;
    printf("Nhập một số nguyên: ");
    scanf("%d", &so);

    int tongChuSo = tinhTongChuSo(so);
    printf("Tổng các chữ số là: %d\n", tongChuSo);

    return 0;
}