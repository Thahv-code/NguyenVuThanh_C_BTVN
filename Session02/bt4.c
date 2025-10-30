
#include <stdio.h>

int main(int argc, const char *argv[])
{
    int chieuDaiHinhChuNhat = 5, chieuRongHinhChuNhat = 8;
    int chuVi, dienTich;
    chuVi = (chieuDaiHinhChuNhat + chieuRongHinhChuNhat) * 2;
    dienTich = chieuRongHinhChuNhat * chieuDaiHinhChuNhat;
    printf("chu vi cua hinh vuong la %d\ndien tich cua hinh vuong la %d\n", chuVi, dienTich);
    return 0;
}
