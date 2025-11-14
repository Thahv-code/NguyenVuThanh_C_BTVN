#include <stdio.h>
int main()
{
    int month;
    printf("Nhap thang(1-12):");
    scanf("%d", &month);
    if (month < 1 || month > 12)
    {
        printf("Thang khong hop le\n");
    }
    else
    {
        if (month == 2)
        {
            printf("Thang  co 28 hoac 29 ngay");
        }
        else if (month == 4 || month == 6 || month == 9 || month == 11)
        {
            printf("Thang  co 30 ngay");
        }
        else
        {
            printf("Thang  co 31 ngay");
        }
    }
}