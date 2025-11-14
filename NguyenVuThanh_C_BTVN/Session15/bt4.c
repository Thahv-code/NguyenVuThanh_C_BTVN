#include <stdio.h>

int tinhTong(int arr[], int n)
{
    int tong = 0;
    for (int i = 0; i < n; i++)
    {
        tong += arr[i];
    }
    return tong; 
}

int main()
{
    int mang[] = {1, 2, 3, 4, 5};
    int kichThuoc = sizeof(mang) / sizeof(mang[0]);
    int ketQua = tinhTong(mang, kichThuoc);
    printf("Tong cac phan tu trong mang la: %d\n", ketQua);
    return 0;
}