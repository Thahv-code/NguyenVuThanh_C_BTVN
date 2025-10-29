
#include <stdio.h>

int main(int argc, const char *argv[])
{
    float banKinh;
    printf("hay nhap ban kinh : ");
    scanf("%f", &banKinh);
    float chuVi, dienTich;
    const float PI = 3.14;
    chuVi = banKinh * 2 * PI;
    dienTich = banKinh * banKinh * PI;
    printf("chu vi cua hinh tron la %.2f\n dien tich cua hinh tron la %.2f\n", chuVi, dienTich);
    return 0;
}