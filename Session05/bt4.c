#include <stdio.h>

int main()
{
    float income;
    float tax;

    printf("Nhap muc thu nhap cua ban : ");
    scanf("%f", &income);

    if (income <= 5)
    {
        tax = income * 0.05;
    }
    else if (income <= 10)
    {
        tax = income * 0.10; 
    }
    else
    {
        tax = income * 0.15;
    }

    printf("Thue thu nhap phai dong : %.2f", tax);
    return 0;
}