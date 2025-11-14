#include <stdio.h>
int main()
{
    int n, i;     // n la so phan tu cua mang
    int arr[100]; // khai bao mang cos 100 phan tu

    printf("Nhap so phan tu cua mang:"); // nhap vao so phan tu cua mang
    scanf("%d", &n);
    // nhapj vao tung phan tu cua mang
    for (i = 0; i < n; i++)
    {
        printf("Nhap phan tu thu %d cua mang: ", i);
        scanf("%d", &arr[i]);
    }
    // in ra cac phan tu vua nhap
    printf("Cac phan tu vua nhap la: ");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}