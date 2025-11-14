#include <stdio.h>
int main()
{
    float number;
    printf("Nhap so:");
    scanf("%f", &number);
    if (number < 0)
    {
        printf("So vua nhap la so am");
    }
    else
    {
        printf("So vua nhap la so duong");
    }
    return 0;
}