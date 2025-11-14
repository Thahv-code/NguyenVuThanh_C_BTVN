
#include <stdio.h>

int main(int argc, const char *argv[])
{
    float num1, num2, num3, tong, tbc;
    printf("Hay nhap diem toan ");
    scanf("%f", &num1);
    printf("Hay nhap diem van ");
    scanf("%f", &num2);
    printf("Hay nhap diem anh ");
    scanf("%f", &num3);
    tong = num1 + num2 + num3;
    tbc = tong / 3;
    printf("tong diem cua ba mon la %.2f\ndiem trung binh cong cua ba mon la %.2f\n", tong, tbc);
    return 0;
}