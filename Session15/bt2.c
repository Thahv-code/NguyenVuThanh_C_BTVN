#include <stdio.h>
#include <stdlib.h>

int sum(int n)
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
    int number;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &number);

    int tongChuSo = sum(number);
    printf("Tong cac chu so la: %d\n", tongChuSo);

    return 0;
}