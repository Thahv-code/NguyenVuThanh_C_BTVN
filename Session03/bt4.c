
#include <stdio.h>

int main(int argc, const char *argv[])
{
    float num1, num2, num3, tong, tbc;
    printf("hay nhap diem toan ");
    scanf("%f", &num1);
    printf("hay nhap diem van ");
    scanf("%f", &num2);
    printf("hay nhap diem anh ");
    scanf("%f", &num3);
    tong = num1 + num2 + num3;
    tbc = tong / 3;
    printf("tong diem cua ba mon la %.2f\ndiem trung binh cong cua ba mon la %.2f\n", tong, tbc);
    return 0;
}