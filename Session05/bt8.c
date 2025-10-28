#include <stdio.h>

int main()
{
    float m, total;
    float bac1 = 6000, bac2 = 7000, bac3 = 8500, bac4 = 10000;
    printf("Moi ban nhap khoi luong nuoc da su dung trong thang: ");
    scanf("%f", &m);
    if (m <= 10)
    {
        total = m * bac1;
        printf("so tien nuoc phai tra trong thang la: %.2f", total);
    }
    else if (m <= 20)
    {
        total = 10 * bac1 + (m - 10) * bac2;
        printf("so tien nuoc phai tra trong thang la: %.2f", total);
    }
    else if (m <= 30)
    {
        total = 10 * bac1 + 10 * bac2 + (m - 20) * bac3;
        printf("so tien nuoc phai tra trong thang la: %.2f", total);
    }
    else
    {
        total = 10 * bac1 + 10 * bac2 + 10 * bac3 + (m - 30) * bac4;
        printf("so tien nuoc phai tra trong thang la: %.2f", total);
    }
    return 0;
}