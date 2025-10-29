
#include <stdio.h>

int main(int argc, const char *argv[])
{
    float chieuDai, chieuRong, dienTich;
    printf("hay nhap chieu dai ");
    scanf("%f", &chieuDai);
    printf("hay nhap chieu rong ");
    scanf("%f", &chieuRong);
    dienTich = chieuDai * chieuRong;
    printf("dien tich cua hinh chu nhat la %.2f\n", dienTich);
    return 0;
}